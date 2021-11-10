#include <iostream>

#define maxn 20
#define ll long long

using namespace std;

int a[maxn],b[maxn],res_n,n;
bool f[maxn];
ll res,m;

void try_(int k,ll kl, ll s){
    if((k>n && kl<=m) && s>res){
        res = s;
        return;
    }

    if(k>n){
        return;
    }

    f[k] = 1;
    try_(k+1,kl+a[k],s+b[k]);
    f[k] = 0;
    try_(k+1,kl,s);
}

void output(){
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        cin >> a[i] >> b[i];
    }
    try_(1,0,0);
    output();
    return 0;
}