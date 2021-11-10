#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = (int)1e9+7;

ll sqr(ll x){
    return x*x;
}

ll calc(ll a, ll b){
    if(b==1) return a;
    if(b%2==0) return sqr(calc(a,b/2)%mod)%mod;
    else return (a*calc(a,b-1))%mod;
}

int main(){
    ll a,b;
    cin >> a >> b;
    cout << calc(a,b);
    return 0;
}