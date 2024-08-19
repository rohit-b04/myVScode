#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void subset(int i, vector<vector<int>>& get, vector<int>& ii, vector<int>& arr) {

    if (i == arr.size()) {
        get.push_back(ii);
        return;
    }

    ii.push_back(arr[i]);
    subset(i + 1, get, ii, arr);
    ii.pop_back();
    while(i+1<arr.size()&&arr[i]==arr[i+1])i++;
    subset(i + 1, get, ii, arr);

}


int main() {
    vector<int> arr;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array: " << endl;
    for(int i = 0;i < n;i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    vector<vector<int>> get;
    vector<int> ii;
    subset(0, get, ii, arr);
    sort(get.begin(),get.end());
    for(int i = 0;i < get.size();i++) {
        for(int j = 0;i < get.size();i++) {
            vector<int> t;
            t.push_back(get[i][j]);
            cout << t[i] << " ";
        }
    }
    
    return 0;
}