#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    char moveLetter;
    string yourMove;
    string cpuMove;
    int moveVal;

    cout << "***** ROCK PAPER SCISSORS GAME *****" << endl;

    srand(time(nullptr));

    cout << "Choose your move (R for Rock, P for Paper, S for Scissors): ";
    cin >> moveLetter;

    // Convert letter input into move word
    if (moveLetter == 'R')
    {
        yourMove = "Rock";
    }
    else if (moveLetter == 'P')
    {
        yourMove = "Paper";
    }
    else if (moveLetter == 'S')
    {
        yourMove = "Scissors";
    }
    else
    {
        cout << "Invalid input! Exiting program..." << endl;
        return 1;
    }

    // Get CPU move
    moveVal = rand() % 3;
    if (moveVal == 0)
    {
        cpuMove = "Rock";
    }
    else if (moveVal == 1)
    {
        cpuMove = "Paper";
    }
    else
    {
        cpuMove = "Scissors";
    }

    cout << "You choose: " << yourMove << "      Computer chose: " << cpuMove << endl;
    // Check the winner
    if ((yourMove == "Rock" && cpuMove == "Scissors") || (yourMove == "Paper" && cpuMove == "Rock") || (yourMove == "Scissors" && cpuMove == "Paper"))
    {
        cout << "YOU WIN! :)" << endl;
    }
    else if ((cpuMove == "Rock" && yourMove == "Scissors") || (cpuMove == "Paper" && yourMove == "Rock") || (cpuMove == "Scissors" && yourMove == "Paper"))
    {
        cout << "CPU WIN! :(" << endl;
    }
    else
    {
        cout << "Tie! :|" << endl;
    }

    return 0;
}