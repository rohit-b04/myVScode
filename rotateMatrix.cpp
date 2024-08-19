#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void inMatrix(int matrix[][3], int row, int col) {

    for(int i = 0;i < row;i++) {
        for(int j = 0;j < col;j++) {
            cin>>matrix[i][j];
        }
    }

}
int main() {

    int matrix[3][3], copyMatrix[3][3];
    inMatrix(matrix, 3, 3);
    int nrow = 3, ncol = 3;
    int rowCount = nrow - 1, colCount = 0;
    for(int i = 0;i < nrow;i++) {
        for(int j = 0;j < ncol;j++) {
            copyMatrix[i][j] = matrix[rowCount--][colCount];
        }
        colCount++;
        rowCount = nrow - 1;
    }
    cout<<"Copy Matrix: " << copyMatrix[3][2]<<endl;

    for(int i = 0;i < nrow;i++) {
        for(int j = 0;j < ncol;j++) {
            cout<<copyMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}