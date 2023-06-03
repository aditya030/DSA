#include<iostream>
using namespace std;
// this function is used for printing the board 
void printsolutions(char board[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
// this function is used for checking the condition for placing another queen
bool issafe(int row, int col, char board[][3], int n) {
    int i, j;

    // Check row
    for (i = 0; i < col; i++) {
        if (board[row][i] == 'Q') {
            return false;
        }
    }

    // Check upper left diagonal
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Check lower left diagonal
    for (i = row, j = col; i < n && j >= 0; i++, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}
// this function is used for solving 1 case that is placing 1 queen at a place 
void solve(char board[][3], int col, int n) {
    // Base case
    if (col >= n) {
        printsolutions(board, n);
        return;
    }

    for (int row = 0; row < n; row++) {// for loop for placing one queen in the board 
        if (issafe(row, col, board, n)) { // calling is safe function to check first that is it safe or not 
            board[row][col] = 'Q';  // agar hai toh rkho
            solve(board, col + 1, n); // aur recursion baaki ke places dekhega aur sare rows mai
            board[row][col] = '-'; // backtrack krne ke liye wapas se 0 se initialize krdenge
        }
    }
}

int main() {
    int n = 3;
    char board[3][3] = {};
    int col = 0;
    solve(board, col, n);

    return 0;
}
