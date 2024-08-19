#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isValid(int row, int col, int board[][9], int k) {
    for(int i = 0;i < 9;i++) {
        if(board[i][col] == k) return false;
        if(board[row][i] == k) return false;
        if(board[3 * (row/3) + i / 3][3 * (col/3) + i % 3] == k) return false;
    }
    return true;
}

bool getSolved(int board[][9]) {
    for(int i = 0;i < 9;i++) {
        for(int j = 0;j < 9;j++) {
            if(board[i][j] == 0) {
                for(int k = 1;k < 10;k++) {
                    if(isValid(i, j, board, k)) {
                        board[i][j] = k;
                        if(getSolved(board) == true) return true;
                        else board[i][j] = 0; 
                    }
                }
                return false;
            }
        }
    }
    return true;
}
int main() {

    int board[9][9] = { 0 ,6 ,2 ,0 ,7 ,4 ,5, 0, 8, 
                        8, 5, 4, 2, 1, 9, 0, 7, 3, 
                        9, 7, 3, 0, 6, 8, 1, 2, 4, 
                        3, 8, 5, 0, 4, 2, 7, 6, 9, 
                        0, 4 ,0, 9, 5 ,6 ,8 ,3 ,1 ,
                        0, 0, 0, 0, 3, 7, 2, 4, 5, 
                        0 ,3 ,6 ,0 ,0, 0 ,9 ,5, 2, 
                        7 ,2 ,1, 0, 9, 5, 3, 8, 6, 
                        5 ,0 ,8, 0 ,2 ,3 ,4 ,1 ,7 };
    
    cout << "Enter the sudoku to be solved: " << endl;
    for(int i = 0;i < 9;i++) {
        for(int j = 0;j < 9;j++) {
            cin >> board[i][j] ;
        }
    }
                        
    bool ans = getSolved(board);

    if(ans) {
        cout << endl << "Solved Sudoku: " << endl;
        for(int i = 0;i < 9;i++) {
            for(int j = 0;j < 9;j++)cout << board[i][j] << " ";
            cout << endl;
        }
    }
    else cout << endl << "It cannot be solved!" << endl;
    return 0;
}