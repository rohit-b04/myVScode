#include<iostream>
#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int& func(int a) {
    int& ans = a;
    ans++;
    
    return ans;
}

void update(int& j) {

    cout << "i in update funtion before updating: " << j << endl;
    j++;

}

int main() {

    int i = 5;
    int& j = i; // j is the reference variable.

    cout << "Value of i: " << i << endl;
    cout << "Value of j: " << j << endl;
    i++;
    cout << "i after incrementing i: " << i << endl;
    cout << "j after incrementing i: " << j << endl;
    update(i);
    cout << "i after update function: " << i << endl;
    cout << "&i: " << &i << endl;
    
    int s[3] = {};// static memory allocation
    int* p = new int[i];// dynamic memory allocation
    for(int l = 0;l < i;l++) {
        cin >> p[l];
    }
    for(int l = 0;l < i;l++) {
        cout << p[l] << " " ;
    }
    cout << endl;
    cout << "Before deleting p p[3]: " << p[3] << endl;
    delete p;
    cout << "After deleting p p[3]: " << p[3] << endl; // returns garbage value as p has been deleted

    cout << func(i) << endl;

    return 0;
}