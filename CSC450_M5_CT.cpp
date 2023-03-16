/*
 * Assignment Title: Option #1: User Input Program and Analysis
 * Name: Danny Caperton
 * School: Colorado State University Global
 * Course: 22WD-CSC450-1
 * Instructor: Professor Reginald Haseltine
 * Due Date: March 19, 2023
 */

#include<iostream>
#include<fstream>
using namespace std;

/**
 * Prompt the user for a string of input and adds it to the end of the provided file name.
 * If the file doesn't exist it will create the file. If the file does exist it will append the file.
 * @param filenameIn const char *filenameIn
 */
void appendFile(const char *filenameIn) {
    char input[128]; // Input buffer
    fstream fileIn; // Creating the file in stream

    fileIn.open(filenameIn, true); // Opening the input file

    cout << "Enter some information: "; // Prompting the user
    cin.getline(input, sizeof input); // Gathering the input line
    fileIn << input << endl; // Writing the user input to the file

    fileIn.close(); // Closing the file
}

/**
 * Takes an input file and reads each line, reverses the line and writes the line to the provided
 * filename for output. If the input file doesn't exist an empty output file will still be created.
 * If the output file doesn't exist one will be created. If the output file does exist the contents
 * will be overwritten with the proper data from the input file.
 * @param filenameIn const char *filenameIn
 * @param filenameOut const char *filenameOut
 */
void reverseText(const char *filenameIn, const char *filenameOut) {
    string line; // Storage for the fileIn line
    fstream fileIn; // Creating the file in stream
    fstream fileOut; // Creating the file out stream

    fileOut.open(filenameOut, ios::out); // Opening the output file
    fileIn.open(filenameIn, ios::in); // opening the input file

    // While there is a next line assign it to the line variable
    while(getline(fileIn, line)) {
        reverse(line.begin(), line.end()); // Reversing the characters in the line
        fileOut << line << endl; // Writing the reversed line to the output file
    }

    fileIn.close(); // Closing the input file
    fileOut.close(); // Closing the output file
}

int main() {
    // Defines the file names
    const char *filenameIn = "CSC450_CT5_mod5.txt";
    const char *filenameOut = "CSC450-mod5-reverse.txt";

    // Calls the functions
    appendFile(filenameIn);
    reverseText(filenameIn, filenameOut);

    return 0;
}
