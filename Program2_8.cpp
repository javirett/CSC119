/*
Program2_8
Programmer: Jack Avirett
Course: CSC119
Submission Date 9/21/2021
This program takes the users restaurant meal charge, then calculates the tip, sales tax, and the total..
*/

// include input / output stream.
#include <iostream>
// include input / output manipulator.
#include <iomanip>

using namespace std;

int main()
{
    // declare variable for charge
    float charge;
    // declare variable for after tip
    float afterTip;
    // declare variable for after sales
    float afterSales;
    // declare variable for total
    float total;
    // declare constant variables for the tip and the sales tax.
    const float tip = 0.15;
    const float salesTax = 0.07;

    // Prompt user for charge

    cout << "Please enter your charge: " << endl;

    // get input from user

    cin >> charge;

    // perform calculations on variables.
    // afterTip = the product of charge and tip
    // afterSales equals the product of charge and salestax
    // total is equal to the sum of charge, tip, and sales tax.

    afterTip = charge * tip;
    afterSales = charge * salesTax;
    total = charge + tip + salesTax;

    cout << "Your tip amount is is: " << setw(20) << left << afterTip << endl;

    cout << "Your sales amount is: " << setw(20) << left << afterSales << endl;

    cout << "Your total is: " << setw(20) << left << total << endl;

    return 0;

}
