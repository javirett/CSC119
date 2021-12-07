/*
Program2_9
Programmer: Jack Avirett
Course: CSC119
Submission Date 9/21/2021
This program takes the users weight, then displays a table showing their estimated weight loss if they maintain their diet.
*/



// Include input/output stream
#include <iostream>

// include input / output manipulator
#include <iomanip>

// using standard namespace
using namespace std;

// entry point
int main()
{
    // declaring variables for the user's starting weight.
    int startWeight;
    // declaring variable for weight lost
    int weightLost;
    // declaring constant variable for the estimated weight loss if the user cuts 500 calories from their diet.
    const int lossPerMonth = -4;


    // prompt user for their weight

    cout << "Enter your weight: " << endl;

    // get input from user

    cin >> startWeight;
    // declare that the weight lost variable is equal to the sum of start weight and loss per month.
     weightLost = startWeight + lossPerMonth;


    // display and format our results for each month.

    cout << "Month 1: " << setw(20) << left << weightLost << endl;

    weightLost = weightLost + lossPerMonth;

    cout << "Month 2: " << setw(20) << left << weightLost << endl;

    weightLost = weightLost + lossPerMonth;

    cout << "Month 3: " << setw(20) << left << weightLost << endl;

    weightLost = weightLost + lossPerMonth;

    cout << "Month 4: " << setw(20) << left << weightLost << endl;

    weightLost = weightLost + lossPerMonth;

    cout << "Month 5: " << setw(20) << left << weightLost << endl;

    weightLost = weightLost + lossPerMonth;

    cout << "Month 6: " << setw(20) << left << weightLost << endl;

    return 0;


}
