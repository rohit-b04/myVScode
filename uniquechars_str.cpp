#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* 
void rec_count(string str, vector<int>& v, int& count, int ind) {
    // cout << count << endl;
    if(ind == str.size()) return ;
    v[str[ind] - 'a']++;
    count = count+v[str[ind] - 'a'];
    ind++;
    rec_count(str, v, count, ind);
} */

void count_unique(string str) {
    vector<char> v;
    vector<int> check;
    for(int i = 0;i < 26;i++) {
        check.push_back(0);
    }
    for(int i = 0;i < str.size();i++) {
        check[str[i] - 'a']++;
    }
    int count = 0;
    for(int i = 0;i < check.size();i++){
       if(check[i] >= 2) count = count+check[i];
    } 
    //int n = str.size() - v.size();
    //if(n < 0) n = 0;
    cout << "Unique elements count is: " << str.size()-count << endl;
}


int main() {

    string str;
    cin >> str;
    count_unique(str);
    int count = 0;
    vector<int> v;
    // for(int i = 0;i < 26;i++) {
    //    v.push_back(0);
    //}
    //rec_count(str, v, count, 0);  
    //cout << "Unique elements count is: " << count;        
    return 0;
}