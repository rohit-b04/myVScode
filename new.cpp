#include <iostream>
#include<string>
using namespace std;

int main() {
    //Write your code here
    int age;
   string name;
    getline(cin,name);
    cin>>age;
    cout<<"The name of the person is"<<name<<" and the age is"<<age;
    return 0;
}