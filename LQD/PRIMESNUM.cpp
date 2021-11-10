#include <bits/stdc++.h>
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0)
#define maxn 10000000
#define ll long long
using namespace std;

bool f[maxn] = {0};

void sang(ll maxd){
    ll i,j;
    f[1] = 1;
    f[2] = 0;
    for(i = 4; i<=maxd; i += 2) f[i] = 1;
    for(i = 3; i*i<maxd; i += 2){
        if(f[i]==0){
            if(i*i>=maxd) break;
            for(j = i*i; j<=maxd; j += i){
                f[j] = 1;
            }
        }
    }
}

int main(){
    ll a,b,i;
    cin >> a >> b;
    sang(b);
    for(i = a; i<=b; i++)
        if(f[i]==0) cout << i << "\n";
    return 0;
}