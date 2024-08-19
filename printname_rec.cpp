#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cnt = 0;
string name = "Rohit";
    
void print() {
    
    cout << name << endl;
    while(cnt <= 3) {
        cnt++;
        print();
    }
    return ;
}

int main() {
    print();          
    return 0;
}