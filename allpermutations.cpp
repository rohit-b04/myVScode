#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void get_permutations(string& s, string &temp, vector<string> &ans, int ind) {

    if(ind == s.size()) {
        ans.push_back(s);
        cout << s << endl;
        return ;
    }
    // cout << temp.size() << " " << ind << endl;
    for(int i = ind; i < s.size();i++) {
        swap(s[i], s[ind]);
        get_permutations(s, temp, ans, ind+1);
        swap(s[i], s[ind]);
    }
    
}

int main() {

    string s;
    cout << "Enter the string: " ;
    cin >> s;
    vector<string> ans;
    string temp;
    // temp = s;
    // cout << "Size of temp before reducing it: " << temp.size() << endl;
    // temp.pop_back();
    // cout << "After reducing it: " << temp.size() << endl;
    
    get_permutations(s, temp, ans, 0);          
    return 0;
}