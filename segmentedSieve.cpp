#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> get_prime(int r) {
    
    int s = sqrt(r);
    vector<bool> isPrime(s + 1, true);
    vector<int> prime;
    isPrime[0] = isPrime[1] = false;

    // Run a loop until sqrt of r

    for(int i = 2;i <= s;i++) {
        if(isPrime[i]) {
            // mark all the primes before s 
            for(int j = i*2;j <= s;j += i) {
                isPrime[j] = 0; 
            }
        }
    }
    for(int i = 0;i <= s;i++) {
        if(isPrime[i]) {
            
            prime.push_back(i);
        }
    }
    cout<<endl;
    return prime;
}

void get_sieve(int l, int r, vector<int> prime) {

    vector<bool> isPrime(r-l, true);
    
    
    for(int i = 0;i < prime.size();i++) {
        int p = prime[i];
        int s = (l/p)*p;
        if(s < l) {
            s+=p;
        }
        for(int j = s;j < r;j += p) {
            isPrime[j - l] = 0;
        }
    }
    for(int i = 0;i < isPrime.size();i++) {
        if(isPrime[i]) cout<<l+i<<" ";
    }
    
}

int main() {
    
    int l, r;
    cout<<"Enter the range of numbers: "<<endl;
    cin>>l>>r;
    vector<int> prime;
    prime = get_prime(r);
    cout << "Prime numbers in the given range are: ";
    get_sieve(l, r, prime);
    
    return 0;
}