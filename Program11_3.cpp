/*
Geometry Calculator
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 12/6/21
This program allows the user to choose a circle, rectangle, or triangle area calculator.
*/


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// function declaration
int displayMenu();
void displayResult(int input);


int main()
{
    // variable to hold the users choice.
    int choice;

    // loop while the choice is not 4.
    do
    {
        choice = displayMenu();
        displayResult(choice);

    } while (choice !=4);

    // display goodbye message;
    cout << endl;
    cout << "Goodbye!" << endl;


    return 0;
}
int displayMenu()
{
    // variable to hold user input
    int input;

    // display the menu.
    cout << endl;
    cout << "1. Calculate the Area of a Circle." << endl;
    cout << "2. Calculate the Area of a Rectangle." << endl;
    cout << "3. Calculate the Area of a Triangle." << endl;
    cout << "4. Quit." << endl;
    cout << endl;
    cout << "Enter your choice: " << endl;
    cin >> input;
    cout << endl;

    // validate input
    while (!(cin >> input) || !(input >=1 && input <=4))
    {
        cout << "Invalid input. Please enter another option: " << endl;
        cin >> input;
        cout << endl;
    }

    // return the input variable to main.
    return input;
}
// display result based off the users input.
void displayResult(int input)
{
    //declare PI variable.
    const double PI = 3.14159;
    double area;

        switch(input)
        {
            // calculate area of a circle.
            case 1:

            double radius;
            cout << "Enter the radius: " << endl;
            cin >> radius;
            area = PI * (pow(radius, 2));
            cout << "The area of the circle is: " << showpoint << fixed << setprecision(5) << area << endl;
            break;

            // calculate area of a rectangle.
            case 2:

            double length;
            double width;
            cout << "Enter the length: " << endl;
            cin >> length;
            cout << endl;
            cout << "Enter the width: " << endl;
            cin >> width;
            cout << endl;
            area = length * width;
            cout << "The area of the rectangle is: " << showpoint << fixed << setprecision(5) << area << endl;
            break;

            // calculate area of a triangle.
            case 3:
            double base;
            double height;
            cout << "Enter the base: " << endl;
            cin >> base;
            cout << endl;
            cout << "Enter the height: " << endl;
            cin >> height;
            cout << endl;
            area = base * height * .5;
            cout << "The area of the triangle is: " << showpoint << fixed << setprecision(5) << area << endl;
            break;
        }
}



