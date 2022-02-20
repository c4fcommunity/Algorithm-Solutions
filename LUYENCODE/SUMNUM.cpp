#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long n, u = 0, m = 2; 
    cin>>n;
    for (int i = 1; i<=sqrt(n); i++){
        if (n%i==0) {
            if (n/i!=i) u+=(i+n/i);
            else u+=i;
        }
    }
    cout<<u;
}
