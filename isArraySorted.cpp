#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> arr, int i) {
    if(arr.size()-1 == i) return true;
    check(arr, i+1);
    if(arr[i] > arr[i+1]) return false;
}

int main() {
    
    
    int n;
    cout << "Enter the size of array:" ;
    cin >> n;
    vector<int> arr(0, n);
    cout << endl << "Enter the array ele: " << endl;
    for(int i = 0 ;i < n;i++) {
        cin >> arr[i];
    }
    cout << endl;
    if(check(arr, 0)) cout << "True" << endl;
    return 0;
}