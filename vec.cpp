#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int binSearch(vector<int> arr, int n, int dif) {
    long long int s = 0, e = n - 1;
    long long int mid = s + (e - s)/2;
    while(e >= s) {
        if(arr[mid] == dif) {
            return 1;
        }
        else if(arr[mid] > dif) {
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return 0;
}

string fourSum(vector<int> arr, int target, int n) {
   
    sort(arr.begin(), arr.end());
    long long int i = 0, j = 0, k = 0, sum = 0;
    long long int check = 0;
    while(i < n) {
        j = i + 1;
        k = n - 1;
        while(j < k) {
            while(k > j) {
                sum = arr[i];
                sum = sum + arr[j];
                sum = sum + arr[k];
                long long int dif = target - sum;
                check = binSearch(arr, n, dif);
                if(check == 1) {
                    return "Yes";
                }
                k--;
            }
            k = n - 1;
            j++;
        }
        i++;
    }
    return "No";

}

void inArray(int arr[], int size ) {

for(int i = 0;i < size;i++) {

    cin>>arr[i];

} 
}
int main() {

    int size, arr[1000];
    cout<<"Enter size :"<<endl;
    cin>>size;
    inArray(arr, size);
    cout<<"Enter target ";
    int target;
    cin>>target;

}
