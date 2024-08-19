#include<iostream>
using namespace std;

int main() {

    char n;
    cin>>n;
    if(n >= 48 && n <= 57) {
        cout<<"Entered character is a number."<<endl;
    }
    else if(n >= 65 && n <= 90) {
        cout<<"Entered character is an uppercase character."<<endl;
    }
    else if(n >= 97 && n <= 122) {
        cout<<"Entered character is a lowercase character."<<endl;
    }
    

}