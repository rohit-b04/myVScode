#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void func(int *p) {
    cout << "This is func()" << endl;
    cout << p << endl;
    cout << *p << endl;
    (*p)++;
    
}

int main() {


    /* int a = 5;
    int *ptr = &a;// & is address of operator. Here * is pointer operator

    void *p1 = 0;// Void pointer.

    char ch = 'a';

    // *p1 = &ch;

    cout << "Value of a: " << a << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout <<  "Value of *ptr: " << *ptr << endl;// Here * is called dereference operator
    int *p2 = ptr;// copying a pointer.
    cout << "Value of *p2 is: " << *p2 << endl;
    cout << "Value of p2 is: " << p2 << endl;

    //There is difference between pointer op and dereference operator.

    // cout << "Value of null pointer *p1: " << *p1 << endl;
    double f = 3.5;
    double *n = &f; 

    double **p3 = &n;// double pointer(one pointer points to address of another pointer.)

    cout << "Value of f: " << f << endl;
    cout << "Value of *n: " << *n << endl;
    cout << "Value of n: " << n << endl;
    cout << "Value of **p3: " << **p3 << endl;
    cout << "Value of p3: " << p3 << endl;
    cout << "Value of &n: " << &n << endl;

    (*n)++;// value of f will be incremented.

    cout << "Value of f after increment of (*n)++: " << f << endl;

    n++;// n will point to the next ( after 8 bytes of ) double type value address

    cout << "Value of n after incrementing n++: " << n << endl;

    cout << "Value of **p3 after incrementing n++: " << **p3 << endl;// will return next double value which will be a garbage value.
   
    cout << "Value of p3 afer incrementing n++: " << p3 << endl;
    cout << "Value of *p3: " << *p3 << endl;

    // void *p4 = &func();  
    
    */

    int arr[10] = {1, 2, 3, 4, 5, 6, 7};
    cout << "Address of arr: " << &arr << endl;
    cout << "Address of 0th index of arr: " << &arr[0] << endl;
    int *p4 = &arr[0];// pointer of 0th index of array
    cout << "Size of array is: " << sizeof(arr) << endl;
    cout << "Size of pointer is: " << sizeof(p4) << endl;
    cout << "Value at 0th index of arr: " << *p4 << endl;
    cout << "Value at 1st index of arr: " << *(p4+1) << endl;
    cout << "Size of first element of arr: " << sizeof(*p4) << endl;
    
    int **p5 = &p4;

    cout << "Value of *p5: " << *p5 << endl;
    cout << "Value of *((*p5)+1): " << *((*p5)+1) << endl;// **p5+1 will print the value at next address of *p4

    int ***t = &p5;

    // cout << "Value of arr[0] before the function: " << arr[0] << endl;

    func(p4);

    cout << "Value of arr[0] after the function: " << arr[0] << endl;
    cout << "Value of ***t: " << ***t << endl;// So here we know that triple pointers exist as well.
    

    return 0;
}
