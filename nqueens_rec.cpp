#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void get_ans(int ans, vector<string> &board, int i, int j) {
    
}
int main() {

    int n;
    cout << "Enter the number of queens: " << n;
    cin >> n;
    vector<string> board;
    string str(n, '.');
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) board[i][j] = str[i];
    }
    int ans = 0;
    vector<vector<string>> ans;
    get_ans(ans, board, 0, 0);          
    return 0;
}