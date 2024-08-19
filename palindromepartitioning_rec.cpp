#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int start, int end, string s) {
    //cout << "In the isPalindrome fuction" << endl;
    while(start <= end) {
        if(s[start++] != s[end--]) return false;
    }
    //cout << endl << "In palindrome checking func";
    return true;
}

void string_partition(string s, int ind, string& temp, vector<string>& stemp, vector<vector<string>>& ans) {
    //cout << "At the start of the function" << endl;
    if(ind == s.size()){
        ans.push_back(stemp);
        return;
    } 
    //cout << "Before for loop in the func string_partition" << endl;
    for(int i = ind;i < s.size();i++) {
        //cout << "In the for loop in string_partition func" << endl;
        if(isPalindrome(ind, i, s)) {
            //cout << "In if of for loop in string_partition" << endl;
            temp+=s[i];
            stemp.push_back(s.substr(ind, i-ind+1));
            cout << stemp[i] << " ";
            //cout << temp;
            string_partition(s, i + 1, temp, stemp, ans);
            stemp.pop_back();
        } 
        cout << endl;
    }
    cout << endl;
    
    //cout << "After the for loop!" << endl;
}

int main() {

    string s;
    cout << "Enter a string: ";
    cin >> s;
    string temp;
    vector<string> stemp;
    vector<vector<string>> ans;
    
    //cout << "In main func before string_partition function" << endl;
    string_partition(s, 0, temp, stemp, ans);
    //cout << "In main func after string_partition function" << endl;
    return 0;
}
/* Problem Statement:
Given string s, partition s such that every partition string is a palindrome.
Return all possible palindrome partitioning of s.
Test case: input s = "aab"; output { ["a", "a", "b"], ["aa", "b"] }
In the given test case, there are two possible ways to partition the given string i.e. a, a, b and aa, b
 */