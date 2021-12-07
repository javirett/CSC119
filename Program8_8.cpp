/*
Payroll
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 11/9/21
This program takes data for each employees hours worked and pay rate, then returns the gross wage.
*/
#include <iostream>

using namespace std;

// function prototypes
void inputData(int empId[], double hours[], double wages[], int SIZE);
void outputWages(int empId[], double wages[], int SIZE);

// constant SIZE variable.
const int SIZE = 7;

// array declaration
int empId[SIZE] = {56588, 45201, 78951, 87775, 84512, 13028, 75804};
double hours[SIZE];
double payRate[SIZE];
double wages[SIZE];



int main()
{
    // call input data with the 3 arrays and their sizes.
    inputData(empId, hours, wages, SIZE);
    // call output wages with the 2 arrays to display and their sizes.
    outputWages(empId, wages, SIZE);

    return 0;
}
// function definitions
void inputData(int empId[], double hours[], double wages[], int SIZE)
{
    // for each increment, prompt the user to enter data for the hours and pay rate and assign data to the wages array.
    for (int i = 0; i<SIZE; i++)
    {
        cout << "Enter the hours for employee " << empId[i] << " ";
        cin >> hours[i];
        cout << endl;
        cout << "Enter pay rate for employee " << empId[i] << " ";
        cin >> payRate[i];
        cout << endl;

        wages[i] = hours[i] * payRate[i];
    }
}
void outputWages(int empId[], double wages[], int SIZE)
{
    // for each increment display the data in the empID and wages arrays.
    for (int c = 0; c<SIZE; c++)
    {
        cout << "Employee " << empId[c] << " gross wage: " << wages[c] << endl;
    }
}
