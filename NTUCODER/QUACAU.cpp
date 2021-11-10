#include <bits/stdc++.h>

using namespace std;
int f[100001],a[100001],n,m,i,j;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    f[0] = 0;
    f[1] = a[1];
    f[2] = a[2];
    for(i=3; i<=n; i++) f[i] = min (f[i-1]+a[1]+a[i], f[i-2]+a[1]+a[i]+2*a[2]);
    cout << f[n];
    return 0;
}