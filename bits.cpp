#include<iostream>
using namespace std;

int setBits(int a, int b) {

int aCount = 0,bCount = 0;
for(int i = a;i != 0;(i = i >> 1)) {

    if(i & 1) {
        aCount++;
    }
  
}
for(int j = b;j != 0;(j = j >> 1)) {

    if(j & 1) {
        bCount++;
    }

}
return (aCount + bCount);

}


int main() {

int a,b;
cin>>a>>b;
int ans = setBits(a, b);
cout<<"Total number of set bits in "<<a<<" and "<<b<<" is :"<<ans<<endl;
return 0;

}