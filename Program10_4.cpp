#include <iostream>
#include <fstream>

using namespace std;

void openFile(ifstream &file, string name);
void closeFile(ifstream &file);

int main()
{

    ifstream inputFile;

    string name = "numbers.dat";

    openFile(inputFile, name);

    closeFile(inputFile);

}
void openFile(ifstream &file, string name)
{
    cout << "Opening file: " << name << endl;

    file.open(name);

    if (file.fail())
    {
        cout << "Error." << endl;
        exit(1);
    }

    int noItems = 0;
    int sum = 0;
    int num;
    int average;

    while(file >> num)
    {
        sum = sum + num;
        noItems++;
    }

    average = sum/noItems;

    cout << "Average is: " << average << endl;

}
void closeFile(ifstream &file)
{
    cout << "Closing file..." << endl;

    file.close();

    cout << "File closed." << endl;
}
