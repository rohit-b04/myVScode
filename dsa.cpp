#include<iostream>
using namespace std;

int main() {

int n;
int count = 0;
cout<<"Enter a number:"<<endl;
cin>>n;
while(n > 0) {

    if(n & 1 == 1) {

        count++;

    }
    n = n >> 1;

}
cout<< count << endl;

int num;
int nnum = 0;
cout<<"Enter a number:"<<endl;
cin>>num;

while(num > 0) {

    int temp = num % 10;
    nnum = (nnum * 10) + temp;
    num = num / 10;

}
cout<<nnum;



    return 0;
}