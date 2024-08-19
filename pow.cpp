#include<iostream>
#include<math.h>
using namespace std;

int main() {

int n;
cin>>n;

if(n == 0) {

    cout<<"Entered no. is 0"<<endl;

}

int temp = pow(2,30);

if( n >= (temp * 2) - 1 ) { 
    cout<<"The number is out of constraints."<<endl;
}

for(int i = 1;i <= 30;i++) {

    int p = pow(2, i);

    if( n == p ) {

        cout<<"Yes!"<<endl;

    }

}

return 0;
}