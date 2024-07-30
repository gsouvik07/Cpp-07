#include <iostream>

using namespace std;

int main() {
  // Initialize the board.
  char board[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
  };

  // Start the game.
  int turn = 1;
  while (true) {
    // Get the player's move.
    int row, col;
    cout << "Player " << turn << "'s turn: ";
    cin >> row >> col;

    // Make the move.
    board[row][col] = (turn == 1) ? 'X' : 'O';

    // Check if the game is over.
    int winner = checkWinner(board);
    if (winner != -1) {
      cout << "Player " << winner << " wins!" << endl;
      break;
    }

    // Switch turns.
    turn = (turn == 1) ? 2 : 1;
  }

  return 0;
}

int checkWinner(char board[3][3]) {
  // Check for a winner in each row.
  for (int i = 0; i < 3; i++) {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
      return board[i][0];
    }
  }

  // Check for a winner in each column.
  for (int i = 0; i < 3; i++) {
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
      return board[0][i];
    }
  }

  // Check for a winner in the diagonals.
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
    return board[0][0];
  }

  if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
    return board[0][2];
  }

  // No winner yet.
  return -1;
}