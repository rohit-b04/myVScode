#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binSearch(int* arr, int n) {

    int low = 0, high = n - 1;
    int ans = n;
    int mid = low + (high - low)/2;
    while(low <= high) {
        if(arr[mid] >= n) {
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < n) {
            low = mid + 1;
        } 
        
        mid = low + (high - low)/2;
    }
    return ans;
}

int main() {

    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " array elements: " << endl;
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
    }          
    int ans = binSearch(arr, n);
    
    cout << "Lower bound is at: " << ans << " which is: " << arr[ans] << endl;
    delete arr;
    return 0;
}