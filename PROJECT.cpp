#include <iostream>
using namespace std;

const int SIZE = 3;
char board[SIZE][SIZE];

// to initialize the board with empty spaces
void initializeBoard() {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            board[i][j] = ' ';
}

// to display the board with a bigger visual layout
void printBoard() {
    cout << "\n     0     1     2\n"; // Column headers
    for (int i = 0; i < SIZE; i++) {
        cout << "  +-----+-----+-----+\n"; // Top border of the row
        cout << i << " "; // Row index
        for (int j = 0; j < SIZE; j++) {
            cout << "|  " << board[i][j] << "  "; // Print each cell with borders
        }
        cout << "|\n"; // End of the row
    }
    cout << "  +-----+-----+-----+\n\n"; // Bottom border
}

// to check if the current player has won
bool isWin(char player) {
    // Check rows and columns
    for (int i = 0; i < SIZE; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || // Row
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))   // Column
            return true;
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||     // Diagonal top-left to bottom-right
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))       // Diagonal top-right to bottom-left
        return true;

    return false; // No win found
}

// to check if the board is full and there's a draw
bool isDraw() {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (board[i][j] == ' ') // If any cell is empty, it's not a draw
                return false;
    return true; // All cells are filled
}

// Main gameplay function
void playGame() {
    char player = 'X'; // Start with player X
    int row, col;

    while (true) {
        printBoard(); // Show the board
        cout << "Player " << player << "'s turn.\n";

        // Ask for column input
        cout << "Enter column (0-2): ";
        cin >> col;

        // Ask for row input
        cout << "Enter row (0-2): ";
        cin >> row;

        // Check if the move is valid
        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
            cout << "Invalid move. Try again.\n";
            continue; // Skip to next loop if move is invalid
        }

        board[row][col] = player; // Place the player's mark

        if (isWin(player)) { // Check if the player won
            printBoard();
            cout << "Player " << player << " wins!\n";
            break; // End the game
        }

        if (isDraw()) { // Check if it's a draw
            printBoard();
            cout << "It's a draw!\n";
            break; // End the game
        }

        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }
}

// Main function - program starts here
int main() {
    initializeBoard(); // Set up the empty board
    playGame();        // Start the game
    return 0;          // Exit program
}
    