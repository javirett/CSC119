/*
Meal Plan Selector
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 12/6/21
// This program allows the user to select a meal plan, then prompts them to enter the number of semesters, then calculates the total.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int displayOptions();
int getInput();
double calculateReceipt(int choice, int semesters);
void displayTotal(int choice, int semesters, double total);

int main()
{
    int choice = displayOptions();
    int semesters = getInput();
    double total = calculateReceipt(choice, semesters);
    displayTotal(choice, semesters, total);

    return 0;

}

int displayOptions()
{
    int choice;

    cout << "Plan 1: 7 meals per week for $560 per semester." << endl;
    cout << "Plan 2: 14 meals per week for $1095 per semester." << endl;
    cout << "Plan 3: Unlimited meals for $1500 per semester." << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    while (!(cin >> choice) || !(choice >= 1 && choice <= 3))
    {
        cout << "Invalid choice. Please try again." << endl;
        cin.clear();
        cin.ignore(100, '\n');
    }
    return choice;
}

int getInput()
{
    int semesters;

    cout << "Now enter the number of semesters: ";
    cin >> semesters;

    while (!(cin >> semesters) || !(semesters >= 1 && semesters <= 32))
    {
        cout << "Invalid number. Please try again." << endl;
        cin.clear();
        cin.ignore(100, '\n');
    }

    return semesters;
}

double calculateReceipt(int choice, int semesters)
{
    cout << "Calculating receipt..." << endl;

    double cost;
    double total;

    switch(choice)
    {
        case 1:
            cost = 560.00;
            total = cost * semesters;
            break;

        case 2:
            cost = 1095.00;
            total = cost * semesters;
            break;

        case 3:
            cost = 1500.00;
            total = cost * semesters;
            break;
    }

    return total;
}

void displayTotal(int choice, int semesters, double total)
{
    cout << "You selected Plan: " << choice << " for " << semesters << " semesters." << endl;
    cout << "Your total will be $" << showpoint << fixed << setprecision(2) << total << "." << endl;
}
