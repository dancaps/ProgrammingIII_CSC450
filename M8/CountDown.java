/*
 * Assignment Title: Concurrency Concepts
 * Name: Danny Caperton
 * School: Colorado State University Global
 * Course: 22WD-CSC450-1
 * Instructor: Professor Reginald Haseltine
 * Due Date: April 9, 2023
 */

package com.welcometodannyland.m8;

/**
 * A class which counts down from a supplied number to 0, as its own thread.
 */
public class CountDown implements Runnable {

    private final int threadID; // Thread id
    private final int startNumber; // The starting number to count down from

    public CountDown(int threadID, int stopNumber) { // Constructor
        this.threadID = threadID;
        this.startNumber = stopNumber;
    }

    @Override
    public void run() { // Run method as part of the Runnable interface
        try { // Needs a try catch because of Thread.sleep()
            countDown(this.startNumber);
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
    }

    private void countDown(int startNum) throws InterruptedException {
        int counter = startNum;
        while (counter >= 0) { // Counts down from the starting number ending at zero
            System.out.println("<== Thread ID: " + this.threadID + " :: Counting Down: " + counter);
            Thread.sleep(500); // Sleeps
            counter--; // Decrements counter
        }
    }
}
