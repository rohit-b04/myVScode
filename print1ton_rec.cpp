#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cnt = 1;
int N = 0;

void backtracking(int i, int n) {  // Using backtracking
    if(i < 1) return ;
    backtracking(i-1, n);
    cout << i << endl;
}
/* 
void print() {
    cout << cnt << endl;
    cnt++;
    if(cnt == N+1) return ;// Base case
    print();
}
 */
int main() {
    /* cout << "Enter the value of N: " ;
    cin >> N;
    print(); */
    int n;
    cin >> n;
    backtracking(n, n);
    return 0;
}