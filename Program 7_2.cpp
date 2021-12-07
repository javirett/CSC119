/*
Theater seating revenue with input validation.
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/27/21
This program takes the users input for the amount of tickets sold for each seating area, validates the data, and then calculates the total income.
*/

#include <iostream>
#include <iomanip>

using namespace std;

// function declaration
double validateSecA(int secA);
double validateSecB(int secB);
double validateSecC(int secC);
double calcResult(double a, double b, double c);

int main()
{
    // variable declaration
    const double A_PRICE = 20.00;
    const double B_PRICE = 15.00;
    const double C_PRICE = 10.00;
    int secA;
    int secB;
    int secC;
    int result1;
    int result2;
    int result3;
    int a;
    int b;
    int c;
    double result;

    //prompt for secA
    cout << "Enter tickets sold for A seating: ";
    cin >> secA;
    cout << endl;

    // result 1 = the returned value of validateSecA;
    result1 = validateSecA(secA);

    // a total is equal to result1 * the seat price.
    a = result1 * A_PRICE;

    // prompt for secB
    cout << "Enter tickets sold for B seating: ";
    cin >> secB;
    cout << endl;

    // result2 = the returned value of validateSecB
    result2 = validateSecB(secB);

    // b total is = result2 * the seat price
    b =  result2 * B_PRICE;

    // prompt for secC
    cout << "Enter tickets sold for C seating: ";
    cin >> secC;
    cout << endl;

    // result3 = the returned value for validateSecC
    result3 = validateSecC(secC);
    // the c total is equal to result3 * the seat price
    c =  result3 * C_PRICE ;
    // calc total income
    result = calcResult(a,b,c);

    // print result.
    cout << "Total sales is: $" << result << endl;

    return 0;
}

// function definitions.
double validateSecA(int secA)
{
    // loop until secA is not greater than 300 or less than 0.
    while (secA > 300 || secA < 0)
    {
        // print invalid input
        cout << "Invalid input." << endl;
        cout << "You must enter a value that is less than or equal to 300 and no less than 0.";
        // prompt user to re enter data.
        cin >> secA;
        cout << endl;
    }
    // convert int to double.
     static_cast<double>(secA);
    // return value to main.
     return secA;
}
double validateSecB(int secB)
{
    // loop until secB is less than 500 or greater than 0.
    while (secB > 500 || secB < 0)
    {
        // display invalid input
        cout << "Invalid input." << endl;
        cout << "You must enter a value that is less than or equal to 500 and no less than 0.";
        // prompt to re enter data.
        cin >> secB;
        cout << endl;
    }

    static_cast<double>(secB);

    return secB;
}
double validateSecC(int secC)
{
    // loop until secC is less than 200 or greater than 0
    while (secC > 200 || secC < 0)
    {
        cout << "Invalid input." << endl;
        cout << "You must enter a value that is less than or equal to 200 and no less than 0.";
        cin >> secC;
        cout << endl;
    }

    static_cast<double>(secC);

    return secC;
}
double calcResult(double a, double b, double c)
{
    // calculate result using the total of each seating area.
    double result;
    result = a + b + c;

    return result;
}

