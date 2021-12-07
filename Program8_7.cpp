/*
Phone Number Lookup
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 11/9/21
This program takes an user inputted name and returns the name and phone number stored in an array.
*/
#include <iostream>
#include <string>

using namespace std;

// function declaration
void findNumber(string input, int SIZE);

// constant array size declaration.
const int SIZE = 7;

// array declaration
string people[SIZE] = {"Jack", "Nathan", "Robert", "Cody", "Curtis", "Jackson", "Zach"};
string phoneNo[SIZE] = {"303-823-5151", "303-131-1234", "303-515-6912", "303-591-3492", "303-543-7589", "303-797-4342", "303-636-2322"};

bool found = false;

string input;


int i = 0;

int main()
{
    // Prompt user to enter number
    cout << "Enter a name to find their phone number: ";
    getline(cin, input);
    cout << endl;

    // call findNumber with user input and constant SIZE arguments
    findNumber(input, SIZE);




    return 0;
}

// function declaration
void findNumber(string input, int SIZE)
{
    // loop while found is false and i is less than or equal to the SIZE minus 1.
    while (found == false && i<=SIZE - 1)
    {
        // if the data in the array is equal to the input.
        if (people[i] == input)
        {
            // then the right answer was found.
            found = true;
        }
        else
        {
            // if there's no match, increment and keep searching.
            i++;
        }
    }

    // if found is true then display the name and number.
    if (found == true)
    {
        // display the person
        cout << people[i] << endl;
        // display the number.
        cout << "The number is: " << phoneNo[i] << endl;
    }
    // if not, then display that the search failed.
    else
    {
        cout << "Couldn't find the person you are looking for." << endl;
    }
}
