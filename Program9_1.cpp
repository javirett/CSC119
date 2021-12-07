/*
Sorting Program
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 11/17/21
This program sorts an array and then displays it.
*/

#include <iostream>

using namespace std;

// function prototype
void bubbleSort(int arr[], int SIZE);
void displayArr(int arr[], int SIZE);
void arrSwap(int &a, int &b);


int main()
{
    // local variable delcaration
    const int SIZE = 10;
    int nums[SIZE] = {34, 55, 23, 67, 54, 43, 12, 89, 56, 25};

    // call the sort function with nums array and SIZE.
    bubbleSort(nums, SIZE);

    // call the diplsay function with nums array and SIZE.
    displayArr(nums, SIZE);


    return 0;
}
void bubbleSort(int arr[], int SIZE)
{
    cout << "Sorting elements..." << endl;
    // declare max element
    int maxElem;
    // decrement maxElem for each loop
    for (maxElem = SIZE - 1; maxElem >= 0; maxElem--)
    {
        // display counter
        for (int c; c <= SIZE - 1; c++)
        {
            cout << "{ " << c << " }" << endl;
        }
        // go through each element to max element and swap items.
        for (int i = 0; i < maxElem; i++)
        {
            if (arr[i] > arr[i + 1])
                arrSwap(arr[i], arr[i + 1]);

        }
    }
}
// displays the sorted array with a loop.
void displayArr(int arr[], int SIZE)
{
    cout << "Displaying sorted array...\n";
    cout << endl;


    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
}
// declares a temporary value and allow the contents of a and b to be swapped.
void arrSwap(int &a, int &b)
{
    cout << "Swapping " << a << " with " << b;
    cout << endl;

    int temp;

    temp = a;
    a = b;
    b = temp;
}
