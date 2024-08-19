#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>

using namespace std;

array<int, 5> Array() {
    array<int,5> a; // Copy elements of arr into a   
    for(int i = 0;i < a.size();i++) {
       cin>>a[i];// Accept array elements 
    }
    return a;
}

int main() {
   /*  array<int, 5> arr = Array();
    cout<<arr.at(2)<<endl;
    cout<<arr.front()<<endl;
    for(auto i = 0;i < arr.size();i++) {
        cout<<arr[i]<<" ";
    } */

    /* vector<int> v;// Vector declaration without size and initializtion
    vector<int> a(5, 1);// Vector declaration with size and initialization
    cout<<"Capacity :"<<v.capacity()<<endl;
    v.push_back(8);
    v.push_back(0);
    v.push_back(9);
    v.push_back(1);
    cout<<v.at(1)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<"Printing the vector: ";
    for(int i = 0;i < v.size();i++) {
        cout<<v[i]<<" ";
    } */

    /* deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(0);
    cout<<"Printing the queue :";
    for(int i = 0;i < d.size();i++) {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    cout<<"Element at 2 :"<<d.at(2)<<endl;
    d.pop_back();
    d.pop_front();
    cout<<"Dequeue after poping elements :";
    for(int i = 0;i < d.size();i++) {
        cout<<d[i]<<" ";
    }
    cout<<endl; */

   /*  list<int> l;
    l.push_back(1);
    l.push_front(6);
    l.push_back(5);
    list<int> c(l);// Copies the list l into new list c
    cout<<l.front()<<endl;
    cout<<"Printing the array :";
    int n = l.size();
    for(int i = 0;i < n;i++) {
        cout<<l.front()<<" ";
        l.erase(l.begin());
    } */

   /*  stack<string> s;
    s.push("Hello");
    s.push("Rohit");
    s.push("Bargal");
    cout<<"Top ele :"<<s.top()<<endl;
    s.pop();
    cout<<"Top element after popping :"<<s.top()<<endl; */
    
    

    return 0;
}