#include <bits/stdc++.h>

#define maxn 200001
#define ll long long
#define INF 1000000000000000000

using namespace std;

ll a[maxn];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    ll res = INF;

    cin >> n;
    for(int i = 1; i<=n; i++){
        a[i] = 0;
        cin >> a[i];
        a[i] += a[i-1];
    }

    for(int i = 1; i<=n; i++){
        res = min(res,abs(a[n]-2*a[i]));
    }
    cout << res;
    return 0;
}