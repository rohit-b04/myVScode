#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void inMatrix(int mat[][3], int row, int col) {

    for(int i = 0;i < row;i++ ) {
        for(int j = 0;j < col;j++) cin>>mat[i][j];
    }

}

int getColWiseSum(int mat[][3], int row, int col) {

    int sum = 0, maxi = INT_MIN;
    cout<<"Column wise Addition is : ";
    for(int i = 0;i < row;i++) {
        sum = 0;
        for(int j = 0;j < col;j++) {
            sum += mat[j][i];
            maxi = max(maxi, sum);
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    return maxi;
}

int getRowWiseSum(int mat[][3], int row, int col) {

    int sum = 0, maxi = INT_MIN;
    cout<<"Row wise Addition is : ";
    for(int i = 0;i < row;i++) {
        sum = 0;
        for(int j = 0;j < col;j++) {
            sum += mat[i][j];
            maxi = max(maxi, sum);
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    return maxi;
}

int main() {

    int mat[3][3];
    cout<<"Enter the matrix elements: "<<endl;
    inMatrix(mat, 3, 3);
    int sum = getRowWiseSum(mat, 3, 3);
    cout<<"Maximum row wise sum is: "<<sum<<endl;
    int colMax = getColWiseSum(mat, 3, 3);
    cout<<"Maximum column wise sum is: "<<colMax<<endl;

    return 0;
}