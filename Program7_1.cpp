/*
Payroll program with input validation.
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/27/21
This program takes the users input for an employees pay rate and hours worked, validates them, and then returns the payroll.
*/


#include <iostream>

using namespace std;

// function declaration.
double validatePayRate(double &payRate);
double validateHours(double &hours);

int main()
{
    // variable declaration
    double payRate;
    double hours;
    double result;

    // prompt for payrate
    cout << "Enter the employee pay rate: ";
    cin >> payRate;
    cout << endl;

    // call validatePayRate function with payRate argument.
    validatePayRate(payRate);

    // prompt for hours
    cout << "Enter the number of hours worked: ";
    cin >> hours;
    cout << endl;

    // call validateHours with hours argument.
    validateHours(hours);

    // calculate result.
    result = hours * payRate;

    // display gross pay.
    cout << "The employees gross pay is: $" << result << endl;

    return 0;
}

// function definitions
double validatePayRate(double &payRate)
{
    // loop until payrate is not less than 7.50 or greater than 18.25.
    while (payRate < 7.50 || payRate > 18.25)
    {
        // display invalid input
        cout << "Invalid input." << endl;
        // prompt for valid input
        cout << "Please enter a pay rate between $7.50 and $18.25.";
        cin >> payRate;
        cout << endl;
    }
    // return the valid payrate.
    return payRate;
}
double validateHours(double &hours)
{
    // loop until hours not less than or equal to 0 or greater than 40.
    while (hours <= 0 || hours > 40)
    {
        // display invalid input
        cout << "Invalid input." << endl;
        // prompt for hours.
        cout << "Please enter hours worked between 0 and 40.";
        cin >> hours;
        cout << endl;
    }
    // return valid hours.
    return hours;
}
