
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int basic;
    cin>>basic;
    if(basic > (7500000) || basic < 0) {
        return 0;
    }
    
    double hra = 0.2 * basic;
    double da = 0.5 * basic;
    int allow;
    char grade;
    cin>>grade;
    if(grade == 'A') {
      allow = 1700;  
    }
    else if(grade == 'B') {
        allow = 1500;
    }
    else {
        allow = 1300;
    }
    
    double pf = 0.11 * basic;
    double totalSalary = (basic + hra + da + allow - pf);
    
    cout<<lround(totalSalary)<<endl;
   
    return 0;
}