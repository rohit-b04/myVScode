#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a = 0;
void print() {
    
    if(a == 5) return ;
    cout << a << endl;
    a++;
    print();
 
}

int main() {
    print();          
    return 0;
}