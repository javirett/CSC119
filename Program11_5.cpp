/*
Golf Scores Continued
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 12/6/21
This is a menu based program that allows the user to enter their name and score, saves it to a file, or the user can
read the contents of the file.
*/

#include <iostream>
#include <fstream>

using namespace std;

// function prototype.
int displayMenu();
void determineChoice(int choice);
void getAndWriteData(ofstream &file);
void writeToDisk(ofstream &file, string name, int score);
void openFile(ofstream &file);
void closeFile(ofstream &file);
void readFromFile(ifstream &file);
void openFile(ifstream &file);
void closeFile(ifstream &file);


int main()
{
    int choice;

    while (choice != 3)
    {
        choice = displayMenu();
        determineChoice(choice);
    }
    cout << "Goodbye!" << endl;
    return 0;
}
int displayMenu()
{
    int input;

    cout << "     Select an option:" << endl;
    cout << "1. Save name & score to file." << endl;
    cout << "2. Read name & score from file." << endl;
    cout << "3. Exit the program." << endl;
    cout << "Enter your selection: ";
    cin >> input;
    cout << endl;

    while (!(cin >> input) || !(input >= 1 || input <=3))
    {
        cout << "Invalid input. Please enter another option: ";
        cin >> input;
        cout << endl;
    }

    return input;
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

    cout << "Enter your name and golf score." << endl;
    name.clear();
    cout << "Enter your name: " << endl;
    getline(cin >> ws, name);

    cout << "Enter your score: ";
    cin >> score;
    cout << endl;

    while (!(cin >> score))
    {
        cout << "Invalid input. Please enter your score again." << endl;
        cin >> score;
    }
    cout << endl;

    writeToDisk(file, name, score);

}
// close the file.
void closeFile(ofstream &file)
{
    file.close();
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
void determineChoice(int choice)
{
    switch (choice)
    {
        case 1:
        {
            // declare output file stream variable.
            ofstream outFile;

            // open the file
            openFile(outFile);

            // get and write the data to file.
            getAndWriteData(outFile);

            // close the file
            closeFile(outFile);
        }
            break;

        case 2:
        {
            // declare input file stream variable.
            ifstream inFile("golf.dat");

            // check if golf.dat exists. if not, then display a message.
            if (inFile)
            {
                // open the file
                openFile(inFile);

                //read from file
                readFromFile(inFile);

                // close the file
                closeFile(inFile);
            }
            else
                cout << "No file found." << endl;

        }
            break;
    }
}
