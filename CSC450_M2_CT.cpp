/*
 * Assignment Title: Option #1: String Input Console Application and Program Analysis
 * Name: Danny Caperton
 * School: Colorado State University Global
 * Course: 22WD-CSC450-1
 * Instructor: Professor Reginald Haseltine
 * Due Date: February 26, 2023
 */

#include<iostream>

using namespace std;

/** String Reverse
 * Prompts the user for the number of strings to reverse.
 * Outputs the input string and the reversed string.
 */
int main() {

    int count = 0; // Initialized count

    // Getting the number of strings to reverse
    cout << "How many strings would you like to reverse? ";
    cin >> count;

    // Loops the number of times the user wants to input strings
    while (count > 0) {

        string str; // String object to hold the user input

        // Collecting the string from the user
        cout << "Enter the string you want to reverse: ";
        cin >> str;

        // Printing the user input as a validation
        cout << "You entered:        " << str << endl;

        /* Loops through the first half of the characters in the string and swaps
           the values with the characters in the second half of the string */
        for (int i = 0; i < str.length() / 2; ++i) {
            // Stores the value in from the working index
            char tmp = str.at(i);
            // Assigns the value from the corresponding working index at the end to the working index at the beginning
            str.at(i) = str.at(str.length() - 1 - i);
            // Assigns the temp value to the working index at the end
            str.at(str.length() - 1 - i) = tmp; //
        }

        // Prints the resulting string
        cout << "Your word reversed: " << str << endl;

        // Decrements the counter
        count--;
    }

    return 0;
}
