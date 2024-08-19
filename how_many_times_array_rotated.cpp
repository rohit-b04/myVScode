#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binSearch(int *arr, int n) {
    int low = 0, high = n - 1;
    int mid = 0, ans_ind = 0;
    while(low <= high) {
        mid = low+(high - low)/2;
        if(arr[low] <= arr[mid] && arr[ans_ind] >= arr[low]) {
            ans_ind = low;
            low = mid + 1;
        }
        else {// arr[low] > arr[mid]
            if(arr[mid] < arr[low] && arr[ans_ind] >= arr[mid]) {
                ans_ind = mid;
            }
            high = mid - 1;
        }
    }
    return ans_ind;
}

int main() {

    int n;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the array elements: " << endl;
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int ans = binSearch(arr, n);
    cout << "The number of times array is rotated is: " << ans << endl;
    delete arr;
    return 0;
}