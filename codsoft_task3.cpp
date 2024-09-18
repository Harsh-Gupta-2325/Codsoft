#include <iostream>
using namespace std;

// Function to display the Tic-Tac-Toe board
void printBoard(char board[3][3]) {
    cout << "\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) std::cout << " | ";
        }
        cout << "\n";
        if (i < 2) std::cout << "--|---|--\n";
    }
    cout << "\n";
}

// Function to check if a player has won
bool checkWin(char board[3][3], char mark) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == mark && board[i][1] == mark && board[i][2] == mark) return true;
        if (board[0][i] == mark && board[1][i] == mark && board[2][i] == mark) return true;
    }
    if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark) return true;
    if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark) return true;
    return false;
}

// Function to check if the game is a draw
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return false;
        }
    }
    return true;
}

// Function to switch players
char switchPlayer(char currentPlayer) {
    return (currentPlayer == 'X') ? 'O' : 'X';
}

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char curr_play = 'X';
    int row, col;
    bool gameOver = false;

    cout << "Welcome to Tic-Tac-Toe!\n";

    while (!gameOver) {
        printBoard(board);

        // Prompt current player to make a move
        cout << "Player " << curr_play << ", enter your move (row and column: 0, 1, or 2): ";
        cin >> row >> col;

        // Check if the move is valid
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = curr_play;

            // Check for a win
            if (checkWin(board, curr_play)) {
                printBoard(board);
                cout << "Player " << curr_play << " wins!\n";
                gameOver = true;
            }
            // Check for a draw
            else if (checkDraw(board)) {
                printBoard(board);
                cout << "The game is a draw!\n";
                gameOver = true;
            }
            // Switch players if the game is not over
            else {
                curr_play = switchPlayer(curr_play);
            }
        } else {
            cout << "Invalid move. Try again.\n";
        }
    }

    // Prompt to play again
    char playAgain;
    cout << "Do you want to play again? (y/n): ";
    cin >> playAgain;

    if (playAgain == 'y' || playAgain == 'Y') {
        main();  // Restart the game
    } else {
        cout << "Thanks for playing!\n";
    }

    return 0;
}



