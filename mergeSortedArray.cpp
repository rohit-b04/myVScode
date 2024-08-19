#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> inVector(vector<int> a, int n) {

    for(int i = 0; i < n;i++) {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    return a;
}

void merge(vector<int> a, int n , vector<int> b, int m, vector<int> c , int l ) {

    int i = 0, j = 0, k = 0;
    
    while(i < n && j < m) {
        
        if(a[i] < b[j]) {
            c.push_back(a[i]);
    
            i++;
        }
        else {
            c.push_back(b[j]);
    
            j++;
        }
    }
    while(i < n) {
        c.push_back(a[i]);
        i++;

    }
    while(j < m) {
        c.push_back(b[j]);
        j++;

    }
    cout<<"Merged array :"<<endl;
    for(i = 0; i < l;i++) {
        cout<<c[i]<<" ";
    }
    cout<<endl;

}

int main() {
    
    vector<int> v;
    vector<int> a;
    vector<int> b;
    int n, m, k;
    cout<<"Enter the size of vector v and a : "<<endl;
    cin>>n>>m;
    cout<<"Vector v: "<<endl;
    v = inVector(v, n);
    cout<<"Vector a: "<<endl;
    a = inVector(a, m);
    k = n + m;
    merge(v, n, a, m, b, k);
    
   /*  for(int i = 0;i < a.size();i++) {
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    for(int i = 0;i < v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl; */

  /*   int a[1000] = {1, 3, 5, 6};
   int b[1000] = {0, 2, 7};
   int n = 4, k = 3, l = 7;
   int c[7]; */
   
 
    return 0;
}