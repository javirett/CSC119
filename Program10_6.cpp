/*
Golf Scores
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 11/21/21
This program writes the users name and score to golf.dat file.
*/

#include <iostream>
#include <fstream>

using namespace std;

// function prototype.
void getAndWriteData(ofstream &file);
void writeToDisk(ofstream &file, string name, int score);
void openFile(ofstream &file);
void closeFile(ofstream &file);


int main()
{

    // declare output file stream variable.
    ofstream outFile;

    // open the file
    openFile(outFile);

    // get and write the data to file.
    getAndWriteData(outFile);

    // close the file
    closeFile(outFile);

    return 0;

}
// write data to disk.
void writeToDisk(ofstream &file, string name, int score)
{
    file << "Name: " << name << ". Score: " << score << "." << endl;
}
// open the file
void openFile(ofstream &file)
{
    file.open("golf.dat", ios::app);
}
// get the data, then call writeToDisk function.
void getAndWriteData(ofstream &file)
{
    string name;
    int score;

    while (!(name == "0"))
    {
        cout << "Enter your name and golf score. Type 0 to exit." << endl;
        cout << "Enter your name: ";
        getline(cin, name);
        cout << endl;
        cout << "Enter your score: ";
        cin >> score;
        cout << endl;
        writeToDisk(file, name, score);

    }
}
// close the file.
void closeFile(ofstream &file)
{
    file.close();
}
