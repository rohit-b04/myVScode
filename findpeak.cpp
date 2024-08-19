#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_peak(int* arr, int n) {
    if(n == 1 || arr[0] > arr[1]) return 0;
    if(arr[n-1] > arr[n-2]) return n-1;
    int low = 1, high = n - 2;
    int mid = 0;
    while(low <= high) {
        mid = low + (high - low) / 2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
        else if(arr[mid] < arr[mid - 1]) high = mid - 1;
        else low = mid + 1;// arr[mid] < arr[mid + 1] low
    }
    return -1;
}

int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the array elements: " << endl;
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    cout << "Peak element is at index: " << find_peak(arr, n) << endl;

    delete arr;
    return 0;
}