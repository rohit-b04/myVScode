#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* void inMatrix(vector<vector<int>> matrix, int row, int col) {
    for(int i = 0;i < row;i++) {
        for(int j = 0;j < col;j++) {
            cin>>matrix[i][j];
        }
    }
} */

pair<int, int> binSearch(vector<vector<int>> matrix, int row, int col, int x) {

    pair<int, int> ans;
    int s = 0, e = (row*col) - 1;
    int mid = s + (e - s)/2;
    while(s <= e) {
        int element = matrix[mid/col][mid%col];
        if(element == x) {
            ans.first = mid/col;
            ans.second = mid%col;
            return ans;
        }
        else if(element < x) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    ans.first = -1;
    ans.second = -1;
    return ans;
}

int main() {
    
    vector<vector<int>> matrix;
    int row, col;
    cout<<"Enter the row and col size of matrix: "<<endl;
    cin>>row>>col;
    cout<<"Enter a sorted matrix: "<<endl;
    // inMatrix(matrix, row, col);
    for(int i = 0;i < row;i++) {
        vector<int> ele;
        for(int j = 0;j < col;j++) {
            int e;
            cin>>e;
            ele.push_back(e);
        }
        matrix.push_back(ele);
    }
    int target;
    cout<<endl<<"Enter the element which you want to search: ";
    cin>>target;
    pair<int, int> index = binSearch(matrix, row, col, target);
    cout<<endl<<target<<" is present at index ["<<index.first<<"]["<<index.second<<"]"<<endl;
    return 0;
}