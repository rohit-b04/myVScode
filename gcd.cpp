#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    
    if(a == 0) return b;
    if(b == 0) return a;

    int n = max(a, b), m = min(a, b);
    
    // cout << "a is: " << a << "b is: " << b << endl;

    while(n != 0) {
        n = n % m;
    }
    return m;
    
}

int main() {
    
    int a, b;
    cout << "Enter the two numbers: ";
    cin>>a>>b;
    int g = gcd(a, b);
    cout<<"\nThe gcd of numbers is: "<<g<<endl;
    return 0;
}