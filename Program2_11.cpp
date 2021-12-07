/*
Program2_11
Programmer: Jack Avirett
Course: CSC119
Submission Date 9/22/2021
This program determines the amount of slices of pizza left over if everyone at the party gets 3 slices of pizza.
*/


// Include input output stream and manipulator
#include <iostream>

#include <iomanip>

using namespace std;

// entry point
int main()
{
    // declare variables for pizzas, number of slices, people, total slices and slices left over.
    int pizzas;
    int slices;
    int people;
    int peopleSlices;
    int totalSlices;
    int slicesLeftOver;
    const int slicesPerPerson = 3;

    // prompt user for the amount of pizzas
    cout << "Enter the number of pizzas you will have: " << endl;

    // get data for pizzas
    cin >> pizzas;

    // prompt user for number of slices
    cout << "Enter the number of slices each pizza will be cut into: " << endl;

    // get data for slices
    cin >> slices;

    // prompt user for number of people attending
    cout << "Enter the number of people attending: " << endl;
    // get data for people
    cin >> people;

    // perform calculation on my variables.
    totalSlices = pizzas * slices;

    peopleSlices = people * slicesPerPerson;

    slicesLeftOver = totalSlices % peopleSlices;

    // display results

    cout << "You will have " << slicesLeftOver << " slices of pizza left over.";

    return 0;
}
