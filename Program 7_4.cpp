/*
Speeding Violation Calculator.
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/27/21
This program takes the users entered speed and speed limit, validates the input, and then determines if the user was over or under the speed limit and by how much.
*/

#include <iostream>

using namespace std;

// function declaration
int validateSpeedLimit(int speedLimit);
int validateSpeed(int speed);
void calcDifference(int resultSpeedLimit, int resultSpeed);

int main()
{

    // variable declaration
    int speed;
    int speedLimit;
    int resultSpeedLimit;
    int resultSpeed;
    // prompt for speed limit
    cout << "Enter the speed limit: ";
    cin >> speedLimit;
    cout << endl;
    // validate input
    resultSpeedLimit = validateSpeedLimit(speedLimit);


    // prompt for speed
    cout << "Enter your speed: ";
    cin >> speed;
    cout << endl;
    // validate input
    resultSpeed = validateSpeed(speed);

    // call calc difference with the results.
    calcDifference(resultSpeedLimit, resultSpeed);


    return 0;
}

int validateSpeedLimit(int speedLimit)
{
    // loop until input is less than 70 an greater than 20.
    while (speedLimit > 70 && speedLimit < 20)
    {
        // display invalid input.
        cout << "Invalid speed limit." << endl;
        cout << "Speed limit must be greater than 20 and less than 70." << endl;
        // prompt to re enter data
        cout << "Enter the speed limit: ";
        cin >> speedLimit;
        cout << endl;
    }

    return speedLimit;
}
int validateSpeed(int speed)
{
    // loop until speed is greater than 0 and less than 500.
    while (speed < 0 && speed > 500)
    {
        // display invalid.
        cout << "Invalid input." << endl;
        cout << "Speed must be greater than 0 and less than 500." << endl;
        // prompt to re enter data
        cout << "Enter your speed: ";
        cin >> speed;
        cout << endl;
    }

    return speed;
}
void calcDifference(int resultSpeedLimit, int resultSpeed)
{
    // if the speed is greater than the speed limit, then speed % speedLimit
    if (resultSpeed > resultSpeedLimit)
    {
        int milesOver = resultSpeed % resultSpeedLimit;
    // display the result.
        cout << "You were " << milesOver << " miles over the speed limit." << endl;
    }
    // if speed is less than speed limit, then display the difference.
    if (resultSpeed < resultSpeedLimit)
    {
        int milesUnder = resultSpeed - resultSpeedLimit;

        cout << "You were " << milesUnder << " miles under the speed limit." << endl;
    }
}
