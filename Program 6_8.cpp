/*
Random number generator
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/20/21
This program generates 100 random numbers, and then determines how many are odd, and how many are even and then displays them.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// function declaration.
void generateNum();

int main()
{
    // generate seed
    unsigned seed = time(0);
    // init even and odd integer.
    int even = 0;
    int odd = 0;

    // call generateNum(); function
    generateNum();

    return 0;

}
// function definition.
void generateNum()
{
    // generate random number
     srand(seed);

     // run loop 100 times.
    for (int i = 0; i < 100; i++)
    {
        rand();
    // if the number mod 2 equals 0 then add one to even. if else, add to odd.
        if (rand() % 2 == 0)
            even++;
        else
            odd ++;
    }
    // display results.
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

}
