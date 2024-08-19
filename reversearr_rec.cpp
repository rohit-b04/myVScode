#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void revArray(int arr[], int i, int n) { // Using only one parameter
    if(i >= n/2) return ;
    swap(arr[i], arr[n-i-1]);
    i = i + 1;
    revArray(arr, i, n);
}

/* 
void revArray(int arr[], int start, int end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
    if(start == end) return ;
    revArray(arr,start, end);
} */

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    /* revArray(arr, 0, 4); */
    revArray(arr,0, 5);
    cout << "Reversed array is: " << endl;
    for(int i = 0;i < 5;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}