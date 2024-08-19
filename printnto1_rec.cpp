#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/* int n = 0;
void print() {
    cout << n << endl;
    n--;
    if(n==0) return ;
    print();
} */

void backtracking(int i, int n) { // using backtracking 
    if(i > n) return ;
    backtracking(i+1, n);
    cout << i << endl;
}

int main() {
    /* cin >> n;
    print();   */     
    int i = 1, n;
    cin >> n;
    backtracking(i, n);   
    return 0;
}