#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector <int> a,b,f;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,so,j,i;
    cin >> n;
    a.pb(0);
    b.pb(0);
    f.pb(0);
    for(i = 1; i<=n; i++){
        cin >> so;
        a.pb(so);
    }
    b.pb(0);
    f.pb(1);
    for(i = 2; i<=n; i++){
        so = a[i];
        j = i-1;
        while(so<a[j] && j>1) j = f[j];
        if(so>=a[j]){
            f.pb(j);
            b.pb(a[j]);
        }else{
            f.pb(0);
            b.pb(0);
        }
    }
    for(i = 1; i<=n; i++) cout << b[i] << " ";
    return 0;
}