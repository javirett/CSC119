/*
Astronomy Helper
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 12/6/21
This program allows the user to choose a planet from the menu, and then displays information on the chosen planet.
*/

#include <iostream>

// function prototype.
int displayMenu();
void displayResult(int choice);

using namespace std;

// variable to held choice.
int choice;

int main()
{
    // loop while the choice is not equal to five.
    while (choice != 5)
    {
        choice = displayMenu();
        displayResult(choice);
    }

    cout << "Goodbye!" << endl;
    cout << endl;

    return 0;
}
// display the menu and get the input.
int displayMenu()
{
    int input;

    cout << "     Select a Planet" << endl;
    cout << "1. Mercury" << endl;
    cout << "2. Venus" << endl;
    cout << "3. Earth" << endl;
    cout << "4. Mars" << endl;
    cout << "5. Exit the Program." << endl;
    cout << endl;
    cout << "Enter your selection: ";
    cin >> input;
    cout << endl;
    // validate input.
    while (!(cin >> input) || !(input >= 1 || input <= 5))
    {
        cout << "Invalid input. Please enter another option." << endl;
        cin >> input;
        cout << endl;
    }

    return input;
}
// display the results.
void displayResult(int choice)
{
    switch(choice)
    {
        case 1:
        cout << "Mercury" << endl;
        cout << "Average Distance From the sun:       " << "57.9 million kilometers" << endl;
        cout << "Mass:                                " << "3.31 X 10^23 kg" << endl;
        cout << "Surface Temperature:                 " << "-173 to 430 degrees Celsius" << endl;
        cout << endl;
        break;
        case 2:
        cout << "Venus" << endl;
        cout << "Average Distance From the sun:       " << "108.2 million kilometers" << endl;
        cout << "Mass:                                " << "4.87 X 10^24 kg" << endl;
        cout << "Surface Temperature:                 " << "472 degrees Celsius" << endl;
        cout << endl;
        break;
        case 3:
        cout << "Earth" << endl;
        cout << "Average Distance From the sun:       " << "149.6 million kilometers" << endl;
        cout << "Mass:                                " << "5.967 X 10^24 kg" << endl;
        cout << "Surface Temperature:                 " << "-50 to 50 degrees Celsius" << endl;
        cout << endl;
        break;
        case 4:
        cout << "Mars" << endl;
        cout << "Average Distance From the sun:       " << "227.9 million kilometers" << endl;
        cout << "Mass:                                " << "0.6424 X 10^24 kg" << endl;
        cout << "Surface Temperature:                 " << "-140 to 20 degrees Celsius" << endl;
        cout << endl;
        break;
    }
}

