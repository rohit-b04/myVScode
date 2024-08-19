#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
    
    int m = pow(10, 9) + 7;
    long long int ans = 1;
    while(n >= 1) {
        ans = (ans*n)%m;
        n--;
    }
    return ans;
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long int f = fact(n);         
    cout << "Factorial of number " << n << " is: " << f << endl; 
    return 0;
}