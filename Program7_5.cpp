
/*
Rock Paper Scissors Modification
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/27/21
This program is a game of rock paper scissors with the computer.
*/


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;


// function & variable declaration.
int getInput();
void calcResult(int choice, int randNum);

int main()
{

    // seed random number
    unsigned seed = time(0);
    int randNum;
    int userChoice;

    srand(seed);

    // generate random number between 1 and 3.
    randNum = 1 + rand() % 3;

    // call get input.

    userChoice = getInput();
    calcResult(userChoice, randNum);


}

int getInput()
{

    // declare string.
    string choice;


    // prompt user to enter their choice
    cout << "Enter your choice: " << endl;
    cout << "Rock. Paper. Scissors.";
    getline (cin, choice);
    cout << endl;

    // length is equal the length of choice string
    int length = choice.length();

    // for each increment. check if the character is uppercase and convert it to lowercase.
    /*for (int i; i<length; i++)
    {
        if (isupper(choice[i]))

            tolower(choice[i]);
    }
    */

    // determine the choice and convert to integer.
    if (choice == "rock")
    {
        cout << "You chose rock." << endl;
        return 1;
    }
    if (choice == "paper")
    {
        cout << "You chose paper." << endl;
        return 2;
    }
    if (choice == "scissors")
    {
        cout << "You chose scissors." << endl;
        return 3;
    }
}
// function definition.
void calcResult(int choice, int randNum)
{
    // determine the winner based off the results.
    if(randNum == 1)
        cout << "The computer chose rock." << endl;
    else if(randNum == 2)
        cout << "The computer chose paper." << endl;
    else if (randNum == 3)
        cout << "The computer chose paper." << endl;

    if (choice == 1 && randNum == 2)
    {
        cout << "Paper beats rock. Computer wins." << endl;
    }
    else if (choice == 2 && randNum == 3 )
    {
        cout << "Scissors beats paper. Computer wins." << endl;
    }
    else if (choice == 3 && randNum == 1)
    {
        cout << "Rock beats scissors. Computer wins." << endl;
    }
    else if (choice == 1 && randNum == 3)
    {
        cout << "Rock beats scissors. You win!" << endl;
    }
    else if (choice == 3 && randNum == 2)
    {
        cout << "Scissors beats paper. You win!" << endl;
    }
    else if (choice == 2 && randNum == 1 )
    {
        cout << "Paper beats rock. You win!" << endl;
    }
    else
        cout << "Draw" << endl;
}

