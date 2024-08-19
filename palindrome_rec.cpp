#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int l, int r) {
    if(str[l] != str[r]) return false;
    if(l >= r) return true;
    return checkPalindrome(str, ++l, --r); 
}

int main() {

    string str;
    cout << "Enter a string: ";
    cin >> str;
    int r = str.size() - 1, l = 0;
    cout << str[l] << " " << str[r] << endl;
    cout << checkPalindrome(str, l, r) << endl;          
    return 0;
}