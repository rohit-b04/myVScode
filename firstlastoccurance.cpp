#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
    }          
    int low = 0, high = n - 1;
    int mid, k;
    cout << "Enter the element whose first and last occurance is to be found: ";
    cin >> k;
    pair<int, int> ans;
    ans.first = -1, ans.second = -1;
    while(low <= high) {
        mid = low + (high - low)/2;
        if(arr[mid] == k) {
            ans.first = mid;
            high = mid - 1;
        } 
        else if(arr[mid] > k) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    low = 0, high = n - 1;
    while(low <= high) {
        mid = low + (high - low)/2;
        if(arr[mid] == k) {
            ans.second = mid;
            low = mid + 1;
        } 
        else if(arr[mid] > k) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << "First occurance of " << k << " is at: " << ans.first << " and second is at: " << ans.second << endl;
    cout << "No. of occurances of " << k << " is: " << ans.second - ans.first + 1 << endl;
    return 0;
}