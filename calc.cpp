#include<iostream>
using namespace std;
class Calc {
 
    int a,b;
     
    public:
     void calculate(int x,int y) {
        int add,mul,sub,div,mod;
        
        add = x + y;
        cout<<x<<"+"<<y<<"="<<add<<endl;
        sub = x - y;
        cout<<x<<"-"<<y<<"="<<sub<<endl;
        mul = x * y;
        cout<<x<<"*"<<y<<"="<<mul<<endl;
        div = x / y;
        cout<<x<<"/"<<y<<"="<<div<<endl;
        mod = x % y;
        cout<<x<<"%"<<y<<"="<<mod<<endl;
    
    }

};
int main() {
    int x,y;
    cout<<"Enter two numbers:"<<endl;
    cin>>x>>y;
    Calc c = Calc();
    c.calculate(x,y);
    return 0;
}