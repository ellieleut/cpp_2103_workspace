/*this program is a tictactoe game for two players that detects if
there is a winner, if there is a tie, or if the user's input is invalid.
Ellie Leutenegger ECGR2103 003 11/10/23*/

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

//game conditions
char tttb[3][3] = {{' ', ' ', ' '},
{' ', ' ', ' '},
{' ', ' ', ' '}};
    bool xWinner = false;
    bool oWinner = false;
    unsigned int x, y;
//================================================================

//function to print the tttb
void printMatrix() {
    for (int i = 0; i < 3; i++) {
        cout << tttb[i][0] << "|"
        << tttb[i][1] << "|"
        << tttb[i][2] << endl;
        if (i != 2)
            cout << "-----" << endl;
    }
}
//================================================================

//function to collect user's input and place into the board
void capture_xy_Location(char player) {
    bool validInput = false;
    do {
            //asks current player where they would like to place their char
        cout << "Where do you want to place " << player << "?" << endl;
        cout << "Row: ";
        cin >> x;
        cout << "Col: ";
        cin >> y;
        //make sure the input is in the board's valid range
        if (x >= 3 || x < 0 || y < 0 || y >= 3) {
            cout << "Invalid input" << endl;
            continue;
        }
        //checking to make sure that the space is not already taken
        if (tttb[x][y] != ' ') {
            cout << "Location already taken." << endl;
            continue;
        }
        validInput = true;
    } while (!validInput);
    //update the board
    tttb[x][y] = player;
}
//================================================================

//function to check if the current player is the winner
bool foundWinner(char player) {
    //check columns
    for (int i = 0; i < 3; i++) {
        if (tttb[i][0] == player && tttb[i][1] == player && tttb[i][2] == player) {
             return true;
            }
    }
    //check rows
    for (int i = 0; i < 3; i++) {
        if (tttb[0][i] == player && tttb[1][i] == player && tttb[2][i] == player) {
            return true;
        }
    }
    //check the diagonals
    if (tttb[0][0] == player && tttb[1][1] == player && tttb[2][2] == player) {
        return true;
        }
    if (tttb[0][2] == player && tttb[1][1] == player && tttb[2][0] == player) {
        return true;
    }
    //if the return is false, there is no combination that wins yet
    return false;
}
//================================================================

//function to check if the board is full/game is a tie
bool foundTie() {
    bool boardFull = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tttb[i][j] == ' ') {
                //if all spots aren't taken, the game is not tied
                boardFull = false;
                break;
            }
        }

    //all spots are taken and the game is a tie
        if(!boardFull) {
            break;
        }
    }
    return boardFull;
}
//================================================================

int main() {
    char currentPlayer = 'X';
    bool winner = false;        //boolean to trigger if player is a winner
    bool boardFull = false;     //boolean to trigger if tie game


    //while loop for game outputs of winner, tie, or keep going
    while (!winner && !boardFull) {
        printMatrix();           //print the board/updated board each time
        capture_xy_Location(currentPlayer); //get user inputs

        winner = foundWinner(currentPlayer); //check for a winner
        boardFull = foundTie();  //check for tied game/full board

        //print if a user is the winner or if it's a tie game
        if (winner) {
            cout << currentPlayer << "'s wins!" << endl;
        //if no winner is found, check to see if the board is full/tie game
        } else if (boardFull) {
            cout << "Tie!" << endl;
        //if neither of those two, just switch players
        } else {
            if (currentPlayer == 'X') {
                currentPlayer = 'O';
            }
            else {
                currentPlayer = 'X';
            }
        }
    }

    return 0;
}
