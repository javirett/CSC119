/*
Sales Report
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 11/21/21
This program reads the contents of golf.dat and displays them.
*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

// function prototype.
void printSalesReport(ifstream &file);
void openFile(ifstream &file);
void closeFile(ifstream &file);


int main()
{
    // declare input file stream variable.
    ifstream inFile;

    // open the file
    openFile(inFile);

    //read from file
    printSalesReport(inFile);


    // close the file
    closeFile(inFile);

    return 0;

}
// read a each line from the file.
void printSalesReport(ifstream &file)
{
    // declare local variables.
    int id;
    double sales;
    int salesTotal;;
    int totalAllSales;

    cout << "Brewster's Used Cars, Inc." << endl;
    cout << "Sales Report" << endl;

    cout << "Salesperson ID" << "       " << "Sale Amount" << endl;
    cout << "=============================================" << endl;


    // loop and display the contents of the file.
    do
    {
        for (int i = 0; i < 3; i++)
        {
            file >> id;
            file >> sales;
            cout << id << "          " << "$" << showpoint << fixed << setprecision(2) << sales << endl;
            salesTotal = salesTotal + sales;
            totalAllSales = totalAllSales + sales;
        }

        cout << "Total Sales for this salesperson: $" << salesTotal << endl;
        salesTotal = 0;

    } while (!file.eof());

    cout << "Total of all sales: $" << totalAllSales << endl;
    cout << endl;
}
// open the file
void openFile(ifstream &file)
{
    file.open("brewster.txt");
}
// close the file.
void closeFile(ifstream &file)
{
    file.close();
}
