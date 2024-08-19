#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int checkPalindrome(string s)
{
    int start = 0;
    int n = s.length();
    
    string pal;
    for(int i = 0;i < n;i++) {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
            pal.push_back(s[i]);
        }
        if(s[i] >= 'A' && s[i] <= 'Z') {
            char temp = (char)tolower(s[i]);
            pal.push_back(temp);
        }
        
    }
    cout<<"String pal is : "<<pal<<endl;
    int e = pal.length() - 1;
    while(start <= e) {
        if(pal[start] != pal[e]) {
            return 0;
        }
        start++;
        e--;
    }
    return 1;
}

int main() {

    string s = "N2 i&nJA?a& jnI2n";
    string name = "Rohit";
    name.erase(name.begin() + 2);
    cout<<name<<endl;
    cout<<(char)tolower('A')<<endl;
    cout<<checkPalindrome(s)<<endl;
    return 0;
}