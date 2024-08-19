#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>> &mat, int row, int col) {
    int n = mat.size();
    if(row >= 0 && row < n && col >= 0 && col < n && mat[row][col] == 1) {
        return true;
    }
    return false;
}

void findPath(vector<vector<int>> &mat, vector<string>& ans, vector<vector<int>>& vis, string str, int row, int col) {
    if(row == mat.size()-1 && col == mat.size()-1) {
        ans.push_back(str);
        //cout << str << endl;
        // cout << "Base Case" << endl;
        return;
    }
    // cout << "findPath func" << endl;
    if(isValid(mat, row, col+1) && vis[row][col+1] == 0) {
        vis[row][col] = 1;
        //cout << "R" << endl;
        findPath(mat, ans,vis,  str+"R", row, col+1);
        vis[row][col] = 0;
    }
    if(isValid(mat, row+1, col) && vis[row+1][col] == 0) {
        //cout << "D" << endl;
        vis[row][col] = 1;
        findPath(mat,ans,vis, str+"D", row+1, col);
        vis[row][col] = 0;
        
    }
    if(isValid(mat, row-1, col) && vis[row-1][col] == 0) {
        //cout << "U" << endl;
        vis[row][col] = 1;
        findPath(mat, ans,vis, str+"U", row-1, col);
        vis[row][col] = 0;
    }
    if(isValid(mat, row, col-1) && vis[row][col-1] == 0) {
        //cout << "L" << endl;
        vis[row][col] = 1;
        findPath(mat, ans,vis, str+"L", row, col-1);
        vis[row][col] = 0;
    }
}

void takeInput(vector<vector<int>> &mat, int n) {
    cout << "Enter the elements: " << endl;
    vector<int> temp;
    int t;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            cin >> t;
            temp.push_back(t);
        }
        mat.push_back(temp);
        temp.clear();
    }
   
    // cout << mat.size() << endl;
}
int main() {

    vector<string> ans;
    string str = "";
    vector<vector<int>> mat;
    vector<vector<int>> vis;
    cout << "Enter the matrix size: " << endl;
    int n;
    cin >> n;
    takeInput(mat, n); 
    vector<int> ini;      

    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            ini.push_back(0);
        }
        vis.push_back(ini);
        ini.clear();
    }
    findPath(mat, ans,vis, str, 0, 0);
    cout << endl << "Path is: " << endl;
    //cout << ans[0] << endl;
    for(int i = 0;i < ans.size();i++) {
        cout << ans[i];
        cout << endl;
    }
    cout<<"done"<<endl;
    return 0;
}