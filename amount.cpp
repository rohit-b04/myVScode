#include<iostream>
using namespace std;

int main() {

int n;
cin>>n;
int amt = n;
cout<<"1.100rs\n2.50rs\n3.20\n4.10 "<<endl;
int ch;
cin>>ch;
int tenCount,twenCount,fifCount,hunCount;
switch(ch) {

    case 1:
        hunCount = n/100;
        amt = amt/100;
        cout<<hunCount<<endl;
        break;
    case 2:
        fifCount = amt/50;
        amt = amt/50;
        cout<<fifCount<<endl;
        break;
    case 3:
        twenCount = amt/20;
        amt = amt/20;
        cout<<twenCount<<endl;
        break;
    case 4:
        tenCount = amt/10;
        amt = amt/10;
        cout<<tenCount<<endl;
        break;
    
    default:
        cout<<"Not a valid choice!"<<endl;

}
return 0;

}