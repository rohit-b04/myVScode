#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void find_sum(vector<int>& arr, vector<int>& ans,int i, int sum) {
    
    if(i == arr.size()) {
        ans.push_back(sum);
        //cout << ans[ans.size()-1] << " ";
        return;
    }
    find_sum(arr, ans, i+1, sum+arr[i]);
    find_sum(arr, ans, i+1, sum);

}

int main() {

    vector<int> arr;
    int n;
    
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array elements: " << endl;
    for(int i = 0;i < n;i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    vector<int> ans;
    find_sum(arr, ans, 0, 0);
    cout << endl << "Subarray addition: " << endl;
    for(int i = 0;i <= ans.size()-1;i++) {
        cout << ans[i] << " " ;
    } 
    
    return 0;
}
