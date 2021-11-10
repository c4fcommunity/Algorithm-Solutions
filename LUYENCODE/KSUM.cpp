#include <iostream>
#include <vector>

#define ll long long
#define pb push_back

using namespace std;

vector <ll> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll res = 0;
    int so,n,k;

    cin >> n >> k;
    a.pb(0);
    for(int i = 1; i<=n; i++){
        cin >> so;
        a.pb(a[i-1]+so);
    }
    for(int i = k; i<=n; i++){
        res = max(res,a[i]-a[i-k]);
    }
    cout << res;
    return 0;
}