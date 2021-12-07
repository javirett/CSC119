/*
Sum of Numbers From File
Programmer: Avirett, Jack.
Course: CSC 160
Submission Date: 11/20/21
This program reads number.dat and calculates the average of the sum of the numbers in the file.
*/

#include <iostream>
// include file stream.
#include <fstream>

using namespace std;

// function prototype.

void openFile(ifstream &file, string name);
void closeFile(ifstream &file);

int main()
{
    // declare input file stream variable.
    ifstream inputFile
    string name = "numbers.dat";

    // call openFile function with inputFile and name arguments.
    openFile(inputFile, name);

    // call close file.
    closeFile(inputFile);

}
void openFile(ifstream &file, string name)
{
    // opening file name.
    cout << "Opening file: " << name << endl;

    // open file function.
    file.open(name);

    if (file.fail())
    {
        cout << "Error." << endl;
        exit(1);
    }
    // variable declaration
    int sum = 0;
    int num;

    while(file >> num)
    {
        sum = sum + num;
    }
}
void closeFile(ifstream &file)
{
    cout << "Closing file..." << endl;

    file.close();

    cout << "File closed." << endl;
}
