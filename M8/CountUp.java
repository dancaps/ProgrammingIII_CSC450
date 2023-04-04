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
 * A class which counts up to a supplied number starting at 0, as its own thread.
 */
public class CountUp implements Runnable {

    private final int threadID; // Thread id
    private final int stopNumber; // Number to stop counting at

    public CountUp(int threadID, int stopNumber) { // Constructor
        this.threadID = threadID;
        this.stopNumber = stopNumber;
    }

    @Override
    public void run() { // Run method as part of the Runnable interface
        try { // Needs a try catch because of Thread.sleep()
            countUp(this.stopNumber);
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
    }

    private void countUp(int stopNum) throws InterruptedException {
        int counter = 0;
        while (counter <= stopNum) { // Counts up starting at 0 until the stop number
            System.out.println("<== Thread ID: " + this.threadID + " :: Counting Up:   " + counter);
            Thread.sleep(500); // Sleeps
            counter++; // Increments the counter
        }
    }
}
