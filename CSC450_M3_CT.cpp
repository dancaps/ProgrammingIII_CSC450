/*
 * Assignment Title: Option #1: Integer Pointers Program and Analysis
 * Name: Danny Caperton
 * School: Colorado State University Global
 * Course: 22WD-CSC450-1
 * Instructor: Professor Reginald Haseltine
 * Due Date: March 5, 2023
 */

#include <iostream>

using namespace std;

int main() {

    // Dynamically creating the ints
    int* input1 = new int(0); // Creates an int of 0 and assigns the memory address to the pointer
    int* input2 = new int(0);
    int* input3 = new int(0);

    // Assigning input to the ints
    cout << "Enter 3 integers as input." << endl;
    cout << "Enter the first integer:  ";
    cin >> *input1; // Enters the input as the value of the pointer
    cout << "Enter the second integer: ";
    cin >> *input2;
    cout << "Enter the third integer:  ";
    cin >> *input3;

    // Printing the values and memory addresses of the ints
    cout << "==> Input 1: value = " << *input1 << " , address = " << input1 << endl; // input1 is the address of the int
    cout << "==> Input 2: value = " << *input2 << " , address = " << input2 << endl;
    cout << "==> Input 3: value = " << *input3 << " , address = " << input3 << endl;

    // Deletes the memory
    delete input1;
    delete input2;
    delete input3;

    // Nulls the pointer to protect against dangling pointers
    input1 = nullptr;
    input2 = nullptr;
    input3 = nullptr;

    return 0;
}

