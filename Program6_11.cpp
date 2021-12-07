/*
Prime Number Calculator.
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/20/21
This program determines if the number entered is a prime number or not prime and then displays all of the prime numbers between 1 and 100.
*/

#include <iostream>

using namespace std;

// function declaration.
bool isPrime(int num);

int main()
{
    int num = 1;
    bool result = false;

    // for every increment, determine if the input is prime by calling isPrime() and then increment num by 1 and continuously check again until x = 100.
    for (int x = 0; x < 100; x++)
    {
        isPrime(num);
        num++;'

    }
        return 0;
}

// func definition
bool isPrime(int num)
{

    // I = 2, i is less than num/2, increment i by one, for every increment check if num mod i == 0, if it is, number is not prime. If else, the number is prime.
    for(int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
            break;

        }
        else
        {
            cout << "The number " << num << " is prime!" << endl;
            return true;

        }
    }
}

