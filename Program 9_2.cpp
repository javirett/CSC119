/*
Name Sorting & Searching
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 11/17/21
This program sorts x amounts of names, and then allows the user to search for a name.
*/


#include <iostream>

using namespace std;

// function prototype
void getInput(string arr[], int SIZE);
int binarySearch(string arr[], string input, int SIZE);
void bubbleSort(string arr[], int SIZE);
void arrSwap(string &a, string &b);
void checkResult(int result, string arr[]);

int main()
{
    // local variable declaration.
    int length;
    string input;
    int result;

    // prompt user to enter array size.
    cout << "Enter a number of names to store: ";
    cin >> length;
    cout << endl;

    // declare array with size.
    string names[length];

    cout << "Array initialized.\n Getting input..." << endl;
    // call getInput function with names and size.
    getInput(names, length);

    cout << "Input received.\n Sorting names...\n" << endl;
    // sort the names.
    bubbleSort(names, length);

    // prompt user to enter the name to search for.
    cout << "Names sorted.\n Enter a name to search for: ";
    getline(cin, input);
    cout << endl;

    // call binary search with the names array, the user entered string, and the array length.
    // result is equal to the returned value from the binary search function.
    result = binarySearch(names, input, length);

    // check what the returned integer value is.
    cout << "Result is " << result << endl;

    // call check result function to determine if the name was found. function returns position in the array.
    checkResult(result, names);


    return 0;

}
// get user input
void getInput(string arr[], int SIZE)
{
    cout << "Enter " << SIZE << " name(s) to store into an array." << endl;
    cin.ignore();

    for (int c = 0; c<SIZE; c++)
    {
        cout << "Enter name " << c + 1 << ": " << endl;
        getline(cin,arr[c]);
        cout << endl;
    }

}
// search algorithm
int binarySearch(string arr[], string input, int SIZE)
{
    // variable declaration
    int first = 0;
    int last = SIZE - 1;
    int position = -1;
    bool found = false;
    int middle;

    while (!found && first <= last)
    {
        // find midpoint
        middle = (first + last)/2;

        // check if input is equal to middle value.
        if (arr[middle] == input)
        {
            found = true;
            position = middle;
        }
        // if the value is in the lower half.
        else if (arr[middle] > input)
            last = middle - 1;

        // if the value is in the upper half
        else
            first = middle + 1;
    }

    return position;
}
void bubbleSort(string arr[], int SIZE)
{
    cout << "Sorting elements..." << endl;

    int maxElem;

    // decrement max element for each loop.
    for (maxElem = SIZE - 1; maxElem >= 0; maxElem--)
    {
        // display counter
        for (int c; c <= SIZE - 1; c++)
        {
            cout << "{ " << c << " }" << endl;
        }
        // go through each element and swap depending on value.
        for (int i = 0; i < maxElem; i++)
        {
            if (arr[i] > arr[i + 1])
                arrSwap(arr[i], arr[i + 1]);

        }
    }
    // display the sorted array.
    cout << "Displaying sorted array..." << endl;

    for (int x = 0; x < SIZE; x++)
    {
        cout << arr[x] << endl;
    }
}// swap function. declares a temp value to temporarily stores a value to be swapped.
void arrSwap(string &a, string &b)
{
    cout << "Swapping " << a << " with " << b;
    cout << endl;

    string temp;

    temp = a;
    a = b;
    b = temp;
}
// determines if the result returned from search function has found the name searched.
void checkResult(int result, string arr[])
{
    if (result != -1)
    {
        cout << "Name was found!" << endl;
        cout << arr[result] << "!" << endl;
    }
    else
        cout << "Name was not found." << endl;
}

