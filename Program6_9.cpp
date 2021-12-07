/*
Guessing Game.
Programmer: Avirett, Jack.
Course: CSC 119
Submission Date: 10/20/21
A number guessing game. If you guess the right answer, you win. If you guess too low or too high, you get to try again.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool playerTurn();
int randomNum = 1 + rand() % 100;
bool game = true;

int main()
{
    // generate seed.
    unsigned seed = time(0);

    srand(seed);

    // generate random num between 1 and 100

    int randomNum = 1 + rand() % 100;

    // start game loop
    // call playerTurn(); and then assign game to the result of playerTurn();
    while (game != 0)
    {
        playerTurn();
        game = playerTurn();
    }


    return 0;
}
// function definition.
bool playerTurn()
{
    // init local variables.
    int guess;
    int guesses;

    // prompt user to enter their guess.
    cout << "Guess the random number.";
    cin >> guess;
    cout << endl;


    // determine if the guess is less than, greater than, or equal to the random num, and return true, or false.
    if (guess > randomNum)
    {
        cout << "Too high. Try again." << endl;
        guesses++;
    }
    else if(guess < randomNum)
    {
        cout << "Too low. Try again." << endl;
        guesses++;
    }
    else if(guess == randomNum)
    {
        cout << "Congrats! You guessed the right number!" << endl;
        cout << "It took you " << guesses << " tries." << endl;

        return false;
    }

}
