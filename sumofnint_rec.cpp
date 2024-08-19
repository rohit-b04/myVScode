#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int n) { // functional recursion
    if(n == 0) return 0;
    return n + sum(n-1);
}

/* 
void sum(int n, int ans) { // Parameterized recursion
    if(n == 0) {
        cout << ans << endl;
        return ;
    }
    sum(n-1, ans+n);
}
 */
int main() {

    int n;
    cin >> n;
    /* int ans = 0;
    sum(n, ans);   */  
    cout << sum(n) << endl;      
    return 0;
}