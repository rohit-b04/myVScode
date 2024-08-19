#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binSearch(int *arr, int n) {
    int low = 0, high = n - 1;
    int mid = 0, ans = INT_MAX;
    while(low <= high) {
        mid = low + (high - low)/2;
        if(arr[low] <= arr[mid] && arr[low] < ans) {
            ans = arr[low];
            low = mid + 1;
        }
        else {
            if(arr[low] > arr[mid]) {
                ans = arr[mid];
            }
            high = mid - 1;
        }
    }
    return ans;
}

int main() {

    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements: " << endl;
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
    }         
    int min = binSearch(arr, n);
    cout << "Minimum element is: " << min << endl;
    delete arr;
    return 0;
}