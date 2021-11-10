#include <bits/stdc++.h>
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0);
#define max 1000000

using namespace std;

int a[max],f[max];

int main(){
    run_fast
    int res = 0,x,n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        ++a[x];
    }
    for(int i=1; i<=max; i++)
        if(a[i] != 0){
            f[i] += a[i];
            for(int j=i; j<=max; j += i){
                f[j] = (f[i] > f[j])? f[i] : f[j];
                res = (res > f[j])? res : f[j];
            }
        }
    cout << n-res;
    return 0;
}