/*
 * Assignment Title: Option #1: Employee Salary Calculator Program and Analysis
 * Name: Danny Caperton
 * School: Colorado State University Global
 * Course: 22WD-CSC450-1
 * Instructor: Professor Reginald Haseltine
 * Due Date: March 12, 2023
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Dynamically creating the ints
    double* hoursWorked = new double(0.0); // Creates doubles of 0 and assigns the memory address to the pointer
    double* payRate = new double(0.0);
    double* stdHours = new double(0.0);
    double* overtimeHours = new double(0.0);
    double* pay = new double(0.0);

    // Application description
    cout << "Enter the number of hours you worked and your pay rate to calculate your salary for the week." << endl;
    cout << "Any hours over 40 will be calculated at a rate of 1.5 times your normal rate." << endl;

    // Test to make sure there is a value number of hours entered
    do {
        cout << "Enter the number of hours worked this week: ";
        cin >> *hoursWorked; // Collecting the hours worked
        if ((*hoursWorked < 0) || (*hoursWorked > 168)) {
            cout << "You must enter a value between 0 and 168. Please try again." << endl;
        }
    } while ((*hoursWorked < 0) || (*hoursWorked > 168));

    // Test to make sure the value is higher than 0
    do {
        cout << "Enter your pay rate: ";
        cin >> *payRate; // Collecting the hours worked
        if (*payRate < 0) {
            cout << "You must enter a value greater than 0. Please try again." << endl;
        }
    } while (*payRate < 0);

    // Separating the overtime hours
    if (*hoursWorked >= 40) {
        *overtimeHours = *hoursWorked - 40;
        *stdHours = 40;
    } else {
        *stdHours = *hoursWorked;
    }

    *pay = (*payRate * *stdHours) + (*payRate * *overtimeHours * 1.5); // Calculating pay

    // The first use of setprecision() will set the values going forward.
    cout << "==> You worked " << fixed << setprecision(2) << *hoursWorked << " total hours this week." << endl;
    if (*overtimeHours > 0) { // Displays only if there is overtime
        cout << "==> As part of those hours, you worked " << *overtimeHours << " overtime hours this week." << endl;
    }
    //printf("Your pay rate is: $%.2f\n", *payRate); // This could be a vulnerability if used incorrectly
    cout << "Your pay rate is: $" << *payRate << endl;
    if (*overtimeHours > 0) { // Displays the overtime rate is there is overtime
        cout << "Your overtime pay rate is: $" << (*payRate * 1.5) << endl;
    }
    cout << "Your gross pay for the week is: $" << *pay << endl << endl;

    // Shows the values and memory addresses as part of the assignment
    cout << "            *** For Internal Use Only ***" << endl;
    cout << "==> hoursWorked:   value = " << setw(8) << *hoursWorked << " , address = " << hoursWorked << endl;
    cout << "==> payRate:       value = " << setw(8) << *payRate << " , address = " << payRate << endl;
    cout << "==> stdHours:      value = " << setw(8) << *stdHours << " , address = " << stdHours << endl;
    cout << "==> overtimeHours: value = " << setw(8) << *overtimeHours << " , address = " << overtimeHours << endl;
    cout << "==> pay:           value = " << setw(8) << *pay << " , address = " << pay << endl;

    // Deletes the memory
    delete hoursWorked;
    delete payRate;
    delete stdHours;
    delete overtimeHours;
    delete pay;

    // Nulls the pointer to protect against dangling pointers
    hoursWorked = nullptr;
    payRate = nullptr;
    stdHours = nullptr;
    overtimeHours = nullptr;
    pay = nullptr;

    return 0;
}
