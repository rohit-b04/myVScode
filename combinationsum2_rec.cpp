#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

void find_ans(vector<int>& arr, vector<int>& temp, vector<vector<int>>& ans, int n, int target, int ind) {
    if(target == 0 && temp.empty() != 1) {
        int i = 0, size = temp.size();
        while(size--) {
            cout << temp[i] << " " ;
            i++; 
        }
        //set_ans.insert(temp);
        cout << endl;
    }
    for(int i = ind;i < n;i++) {
        if(i > ind && arr[i] == arr[i-1]) continue;
        temp.push_back(arr[i]);
        find_ans(arr, temp,ans, n, target-arr[i], i+1);
        temp.pop_back();
    }
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr;
    for(int i = 0;i < n;i++) {
        int t;
        cin >> t;
        arr.push_back(t);
    }      
    // cout << "The element at ind 5 is: " << arr[5] << endl;
    vector<int> temp;
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    set<vector<int>> set_ans;
    find_ans(arr, temp, ans, n, target, 0);
    
        
    return 0;
}
/* Problem statement
You are given an array ‘arr’ of ‘n’ positive integers.
You are also given a positive integer ‘target’.
Your task is to find all unique combinations of elements of array ‘arr’ whose sum is equal to ‘target’. Each number in ‘arr’ may only be used once in the combination.
Elements in each combination must be in non-decreasing order and you need to print all unique combinations in lexicographical order.
Note:
In lexicographical order, combination/array  ‘a’  comes before array ‘b’ if at the first index 'i' where 'a[i]' differs from 'b[i]', 'a[i]' < 'b[i]  or length of 'a' is less than 'b'.
Test case: arr = {6, 1, 5, 2, 7, 1}, n = 6 */