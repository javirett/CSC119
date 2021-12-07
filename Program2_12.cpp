/*
Program2_12
Programmer: Jack Avirett
Course: CSC119
Submission Date 9/22/2021
This program converts the the temperature from Celsius to Fahrenheit.
*/

// include input output stream.
#include <iostream>

// using standard namespace.
using namespace std;

// entry point
int main()
{
    // variable declaration, converted all mathematical expressions into variables.
    float f;
    float c;
    const float conv1 = 9/5;
    const float conv2 = 32;

    // Prompt user for temperature
    cout << "Enter the temperature in Celsius: " << endl;

    // get data for c
    cin >> c;

    //perform calculation to find F.
   f = (conv1 * c) + conv2;

    // display value of f
    cout << "The temperature in Fahrenheit is: " << f << endl;

    return 0;
}
