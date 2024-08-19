#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    int n, k;
    cout << "Enter the n and k: " ;
    cin >> n >> k;
    string ans = "0";
    int count = 0;
    // cout << stoi(ans) << endl;
    vector<int> v;
    for(int i = 1;i <= n;i++) {
        ans = to_string(i);
        int j = (i+1) % n;
        while(j != i) {
            ans += to_string(j);
            int l = (j+1) % n;
            while(l != j) {
                if(l == i) continue;
                ans += to_string(l);
                l = (l+ 1) % n; 
                //cout << "In l loop" ;
            }
            count++;
            if(count == k) {
                cout << ans << endl;
                return 0;
            }
            //cout << "After l loop in j loop";
            // v.push_back(stoi(ans));
            ans = to_string(i);
            j = (j+1) % n;
        }
    }   
    //sort(v.begin(), v.end());
    //cout << v[k] << endl;
    // cout << ans << endl;   
    return 0;
}