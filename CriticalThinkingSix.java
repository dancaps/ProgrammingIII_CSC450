package com.welcometodannyland.m6;

import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;

public class CriticalThinkingSix {
    public static void main(String[] args) throws IOException {
        readDataBad();
        readDataGood();
    }

    static void readDataBad() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(
                new FileInputStream("src/main/java/com/welcometodannyland/m6/file.txt")));
        // Read from the file
        String data = br.readLine(); // Reads the line as a string
        System.out.println("<== readDataBad:  " + data); // Prints the string
    }

    static void readDataGood() {
        ByteBuffer buffer = ByteBuffer.allocateDirect(16 * 1024); // Creates a byte buffer
        // Try with resources to open and close the file and puts it into the buffer
        try (FileChannel rdr = (
                new FileInputStream("src/main/java/com/welcometodannyland/m6/file.txt")).getChannel()) {
            // Reads the buffer
            while (rdr.read(buffer) > 0) {
                // Loops the byte buffer
                System.out.print("<== readDataGood: ");
                for (int i = 0; i < buffer.capacity(); i++) {
                    if (buffer.get(i) > 0) {
                        System.out.print((char) buffer.get(i)); // Prints the buffer
                    }
                }
            buffer.clear(); // Clears the sensitive data
            }
        } catch (Throwable e) { // Handles the error
            System.out.println("There was an error!");
        }
    }
}
