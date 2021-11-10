#include <bits/stdc++.h>
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
using namespace std;

int main(){
    run_fast;
    ll n;
    cin >> n;
    if(n%2==0) cout << ((n/2)*(n)/2) - ((n+2)*(n/2)/2);
    else cout << ((n+1)*(n/2+1)/2) - ((n/2)*(n+1)/2);
    return 0;
}