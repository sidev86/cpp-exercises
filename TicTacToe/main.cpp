#include <iostream>
#include <string>

using namespace std;

void draw(char (&board)[3][3])
{
    int b = 0;
    for (int i = 0; i < 7; i++)
    {
        if (i == 1 || i == 3 || i == 5)
        {
            cout << "| " << board[b][0] << " | " << board[b][1] << " | " << board[b][2] << " |" << endl;
            b++;
        }
        else
        {
            cout << "|---|---|---|" << endl;
        }
    }
}

void changeTurn(char &turn)
{
    if (turn == 'X')
    {
        turn = 'O';
    }
    else
    {
        turn = 'X';
    }
}

void getPlayerMove(char (&board)[3][3], char &turn)
{
    string choice;
    cout << "\nIt's " << turn << " turn. Place your token by putting the row and the column index separated by a space\n(Indexes --> 0, 1, 2)\n";
    getline(cin, choice);

    int rowPos = choice[0] - 48;
    int colPos = choice[2] - 48;
    if (rowPos >= 0 && rowPos <= 2 && colPos >= 0 && colPos <= 2)
    {
        if (board[rowPos][colPos] == ' ')
        {
            board[rowPos][colPos] = turn;
            changeTurn(turn);
        }
        else
        {
            cout << "This position is already taken. Try again" << endl;
        }
    }
}

bool isWinningSomeone(char (&board)[3][3])
{
    if ((board[0][0] != ' ' && board[0][0] == board[0][1] && board[0][0] == board[0][2]) ||
        (board[1][0] != ' ' && board[1][0] == board[1][1] && board[1][0] == board[1][2]) ||
        (board[2][0] != ' ' && board[2][0] == board[2][1] && board[2][0] == board[2][2]) ||
        (board[0][0] != ' ' && board[0][0] == board[1][0] && board[0][0] == board[2][0]) ||
        (board[0][1] != ' ' && board[0][1] == board[1][1] && board[0][1] == board[2][1]) ||
        (board[0][2] != ' ' && board[0][2] == board[1][2] && board[0][2] == board[2][2]) ||
        (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
        (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]))
    {
        return true;
    }
    return false;
}

bool isBoardFull(char (&board)[3][3])
{
    if (board[0][0] != ' ' && board[0][1] != ' ' && board[0][2] != ' ' && board[1][0] != ' ' && board[1][1] != ' ' && board[1][2] != ' ' && board[2][0] != ' ' && board[2][1] != ' ' && board[2][2] != ' ')
    {
        return true;
    }
    return false;
}

int main()
{
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};
    char turn = 'X';
    bool winner = false;
    bool tie = false;

    cout << "**** TIC TAC TOE ****\n\n\n"
         << endl;

    while (!winner && !tie)
    {
        // Draw board
        draw(board);

        // Player puts token and saving on board
        getPlayerMove(board, turn);

        // After placing token we check if there's a winning line. If so the game loop ends.
        if (isWinningSomeone(board))
        {
            winner = true;
        }
        else if (isBoardFull(board))
        {
            tie = true;
        }
    }

    draw(board);
    if (winner)
    {
        // We have to change the turn again here, because during the match, the player turn is changed when a token is placed, but when
        // there is a winner should be not switched, so we switch again to get the right winner.
        changeTurn(turn);

        cout << "\n\n"
             << turn << " WIN!" << endl;
    }

    else
    {
        cout << "\n\nTIE!" << endl;
    }

    cout << "*** GAME OVER ***" << endl;
    return 0;
}
