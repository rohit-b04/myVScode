#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find_fib(int n) {
    if(n <= 1) return n;
    return find_fib(n-1) + find_fib(n-2);
}

int main() {

    int n;
    cout << "Enter the n: ";
    cin >> n;
    cout << "The fibonacci number is: " <<find_fib(n) << endl;          
    return 0;
}