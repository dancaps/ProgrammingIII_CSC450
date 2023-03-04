/*
 * Assignment Title: Option #1: Console Application and Syntax Corrections
 * Name: Danny Caperton
 * School: Colorado State University Global
 * Course: 22WD-CSC450-1
 * Instructor: Professor Reginald Haseltine
 * Due Date: February 19, 2023
 */

#include <iostream>

using namespace std;

int main() {
    //Variables
    string firstName = "Daisy";
    string lastName = "Smith";
    string street = "629 Race St.";
    string city = "Austin";
    string state = "Texas";
    string zipCode = "78742";

    //Output in the format of a mailing address
    cout << firstName << " " << lastName << endl;
    cout << street << endl;
    cout << city << ", " << state << " " << zipCode << endl;

    //Return
    return 0;
}
