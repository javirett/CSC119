/*
Prime Number Calculator
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/20/21
This program determines if the number entered is prime or not.
*/

#include <iostream>

using namespace std;

// func declaration
bool isPrime(int num);

int main()
{


    int num;
    bool result = false;

    // prompt user to enter num.
    cout << "Enter a number: ";
    cin >> num;

    // result is equal to the returned value of isPrime(num).

    result = isPrime(num);

    // if  the result is true, the number is prime, if its false, the number is not prime.
    if (result == true)
    {

        cout << "The number " << num << " is prime!";

    }
    else if (result == false)
    {
        cout << "The number " << num << " is not prime.";
    }

    return 0;
}

// function definition.
bool isPrime(int num)
{

    // increment i if its less than or equal to num / 2.
    for(int i = 2; i <= num / 2; i++)
    {
        // check if num mod i is equal to 0, if it is, return true, if not, return false.
        if (num % i == 0)
        {
            return false;
            break;
        }
        else
        {
            return true;
        }
    }
}

