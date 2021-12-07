/*
Rock, Paper, Scissors.
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/20/21
A game of rock paper scissors with the computer.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

// variable & function declaration
int getInput();
void calcResult(int choice, int randNum);

int main()
{
    // generate seed
    unsigned seed = time(0);

    int randNum;

    int userChoice;

    srand(seed);

       // generate random num between 1 and 3
    randNum = 1 + rand() % 3;
        // users choice is equal to the return of getInput.
    userChoice = getInput();
        // calc result with users choice and computers choice.
    calcResult(userChoice, randNum);


}

int getInput()
{
    int choice;
    // prompt user to enter choice.
    cout << "Enter your choice: " << endl;
    cout << "1. Rock. 2. Paper. 3. Scissors.";
    cin >> choice;
    cout << endl;
        // switch to determine which value is returned.
    switch(choice)
    {
        case 1:
            cout << "You chose rock." << endl;
            return 1;
        break;
        case 2:
            cout << "You chose paper." << endl;
            return 2;
        break;
        case 3:
            cout << "You chose scissors." << endl;
            return 3;
        break;
    }
}
// function definition
void calcResult(int choice, int randNum)
{
    // check to see if the player or computer won the game. if they both choose the same option, its a draw, and the user will be prompted to play again.
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

