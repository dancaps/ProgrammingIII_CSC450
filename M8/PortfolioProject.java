package com.welcometodannyland.m8;

/**
 * Main program that creates 2 new threads. One each of the CountUp class and
 * CountDown class. Once thread one has been started the join() function is called
 * so that the program waits until it has completed to start the next thread.
 */
public class PortfolioProject {
    public static void main(String[] args) throws InterruptedException {

        /* This demonstrates that in each loop the count up thread is called and count down has wait. Once
        *  count down starts another loop starts which triggers a count up at the same time. The thread numbers
        *  show that the second thread called in the loop can never start until the first thread is done.
        */
        for (int i = 0; i < 5; i++) {
            Thread t = new Thread(new CountUp(i + 1000, 10));
            t.start();
            t.join();
            System.out.println("T1 has started");
            new Thread(new CountDown(i + 2000, 3)).start();
        }

        // Creates the threads
        Thread t1 = new Thread(new CountUp(1000, 20));
        Thread t2 = new Thread(new CountDown(2000, 20));

        t1.start(); // Starts the count up thread
        t1.join(); // Joins the thread so that it must finished before the program continues
        t2.start(); // Starts the count down thread
    }
}
