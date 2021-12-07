/*
Golf Scores
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 11/21/21
This program reads the contents of golf.dat and displays them.
*/

#include <iostream>
#include <fstream>

using namespace std;

// function prototype.
void readFromFile(ifstream &file);
void openFile(ifstream &file);
void closeFile(ifstream &file);


int main()
{
    // declare input file stream variable.
    ifstream inFile;

    // open the file
    openFile(inFile);

    //read from file
    readFromFile(inFile);


    // close the file
    closeFile(inFile);

    return 0;

}
// read a each line from the file.
void readFromFile(ifstream &file)
{
    string line;

    while (file >> line)
    {
        getline(file, line);
        cout << line << endl;
    }

}
// open the file
void openFile(ifstream &file)
{
    file.open("golf.dat", ios::app);
}
// close the file.
void closeFile(ifstream &file)
{
    file.close();
}
