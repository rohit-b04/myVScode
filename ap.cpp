#include<iostream>
using namespace std;

int nterm(int n) {

int t = (3 * n) + 7;
return t;
    
}

int main() {

int n;
cin>>n;
int ans = nterm(n);
cout<<"nth term is :"<<ans;

return 0;

}