#include<iostream>
#include<math.h>
using namespace std;

int main() {

int flag = 11;
flag = flag | 1;
cout<<flag<<endl;
int n;
cout<<"Enter a negative number:"<<endl;
cin>>n;
int p = (-1) * n;
int i = 0, ans = 0;
int bin = p;
int bit = 0;

while(p != 0) {
 
    i = i + 1;
    p = p >> 1;
    
}

// cout<< "Binary represention:" << (ans | 1) << endl;

int count = 1,j = 0;
while(count <= (i + 1)) {

    bit = bin % 2;
    int b = bit ^ 1;
    ans = ans  + (b * pow(10, j));
    j++;
    count++;
    bin = bin / 2;

}
int dec = 0,k = 0;
j = 0,count = 0;
while(ans != 0) {

    count = ans % 10;
    count = count * pow(2,k);
    j = j + count;
    k++;
    ans = ans/10;

}

j = j + 1;
bin = 0, ans = 0, i = 0;
while(j != 0) {

    bin = j % 2;
    ans = ans + (bin * pow(10,i));
    i++;
    j = j / 2;

}
cout<<ans<<endl;


return 0;


}