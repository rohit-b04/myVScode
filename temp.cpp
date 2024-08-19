#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    /* vector<vector<int>> v;
    vector<int> a;
    a.push_back(23);
    a.push_back(22);
    a.push_back(90);
    v.push_back(a);       
    cout << v[0].size() << endl;    */
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    return 0;
}