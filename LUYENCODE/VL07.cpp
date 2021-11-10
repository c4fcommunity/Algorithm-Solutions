#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin >> n >> k;
    double result=1;
    for(int i=k+1;i<=n;++i){
        result*=(double(i)/(n-i+1));
    }
    cout << result;
    return 0;
}