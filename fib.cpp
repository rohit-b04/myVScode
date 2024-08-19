#include<iostream>
using namespace std;

int fibonacci(int n) {

int count = 0,no = 0,res = 1,ans = 0;
for(int i = 0;i < n;i++) {

    ans = count + res;
    count = res;
    res = ans;

}
return res;

}

int main() {

int n;
cin>>n;
int ans = fibonacci(n);
cout<<"nth fibonacci number is: "<<ans<<endl;

return 0;
}