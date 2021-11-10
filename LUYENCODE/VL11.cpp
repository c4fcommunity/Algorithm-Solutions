#include <iostream>

#define ll long long

using namespace std;

bool kt(ll x){
    if(x<2) return 0;
    if(x%2==0 || x%3==0) return 0;
    for(ll i = -1; i*i<=x; i+=6){
        if((i>0)&&(x%i==0 || x%(i+2)==0)) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    if(kt(n)==1) cout << "YES";
    else cout << "NO";
    return 0;
}