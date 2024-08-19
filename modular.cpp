#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// for this one study the rules of modular arithmetics
int Power(int x, int n, int m) {
    int res = 1;
    while(n > 0) {
        if(n & 1) {
            res = (((res)%m) * ((x)%m));
        }
        x = ((x)%m) * ((x)%m);
        n = n>>1;
    }
    return (res%m);
}

int main() {

    int x, n;
    int m = pow(10, 9) + 7;
    cout << endl << m << endl;
    cout << "Enter the number and its power: " ;
    cin >> x >> n;
    int ans = Power(x, n, m);     
    cout << endl << "Answer is: " << ans;     
    return 0;
}
// (x^n)%m = ((x^n/2)^n)%m