/*
Menu based program
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 11/9/21
This program displays the months and the amount of days per month.
*/
#include <iostream>

using namespace std;

// function prototype
void displayMonths(string months[], int noMonths[], int SIZE);

// constant array size declaration
const int SIZE = 12;

// array declaration
string months[SIZE] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October","November", "December"};
int noMonths[SIZE] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    // call display months with the two arrays and the size constant.
    displayMonths(months, noMonths, SIZE);

    return 0;
}
// function definition
void displayMonths(string months[], int noMonths[], int SIZE)
{
    // if the increment is less than the SIZE constant, increment by one
    for (int i; i<SIZE; i++){
        // for each increment display the data contained in both arrays.
        cout << months[i] << " has " << noMonths[i] << " days." << endl;
    }

}
