#include <bits/stdc++.h>
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define maxn 100000
#define ll long long
using namespace std;

int a[maxn];

int main(){
    run_fast;
    int n;
    ll res = 0;
    cin >> n;
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    sort(a+1, a+n+1, greater <int>());
    for(int i = 1; i<=n; i += 3)
        res += a[i]+a[i+1];
    cout << res;
    return 0;
}