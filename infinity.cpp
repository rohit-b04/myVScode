#include<iostream>

using namespace std;

int main() {

int ch = 1;
while(1) {
cout<<ch<<endl;
    switch(ch) {
        case 1:
            exit(0);
            break;
    }
cout<<ch<<endl;
}

switch(ch) {

    case 1: cout<<"Hello"<<endl;
           // continue;
    case 2: cout<<"Hi"<<endl;
            break;

}

return 0;
}