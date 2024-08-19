#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void inMatrix(int matrix[][4], int row, int col) {

    for(int i = 0;i < row;i++) {
        for(int j = 0;j < col;j++) {
            cin>>matrix[i][j];
        }
    }

}

int main() {
    
    int matrix[3][4];
    inMatrix(matrix, 3, 4);
    int nrow = 3 - 1, ncol = 4- 1, row = 0, col = 0;
    int startingRow = 0, startingCol = 0, endingRow = 3- 1, endingCol = 4 - 1;
    int j = 0;
    int count = 0, total = 12;
    vector<int> v;
    while(count < total) {
        j = startingRow;
        while(j <= endingCol && count < total) {
            v.push_back(matrix[startingRow][j]);
            j++;
           count++;
        }
        startingRow++;
        j = startingRow;
        
        while(j <= endingRow && count < total) {
            v.push_back(matrix[j][endingCol]);
            j++;
            count++;
        }
        
        endingCol--;
        j = endingCol;
        while(j >= startingCol && count < total) {
            v.push_back(matrix[endingRow][j]);
            j--;
            count++;
        }
        endingRow--;
        j = endingRow;
        while(j >= startingRow && count < total) {
            v.push_back(matrix[j][startingCol]);
            j--;
            count++;
        }
        startingCol++;
    }
    cout<<endl;
    for(int i = 0; i < v.size();i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}