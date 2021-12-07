/*
Program2_10
Programmer: Jack Avirett
Course: CSC119
Submission Date 9/22/2021
This program takes the users monthly payment, and then multiplies it by the amount of months they've been paying.
*/

// include input / output stream and manipulator.
#include <iostream>
#include <iomanip>

// using standard namespace.
using namespace std;

// entry point
int main()
{
    // variable declaration of the monthly payment, the amount of months, and the total.
    float payment;
    int months;
    float total;

    // prompt user for monthly payment.
    cout << "Enter your monthly payment: " << endl;
    // get data for payment variable.
    cin >> payment;
    // prompt for the amount of months
    cout << "Enter the amount of months you've been paying: " << endl;
    // get data for months variable.
    cin >> months;
    // perform calculation. total is equal to the product of payment and months.
    total = payment * months;

    cout << "Your total payment is: " << setw(20) << left << total << endl;


    return 0;
}
