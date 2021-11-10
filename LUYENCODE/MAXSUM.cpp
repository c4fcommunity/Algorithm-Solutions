#include <iostream>
#include <vector>
#include <cmath>

#define pb push_back
#define INF 10000000000000
#define ll long long

using namespace std;

vector <ll> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    ll res = -INF,so;

    cin >> n;
    a.pb(-INF);
    for(int i = 1; i<=n; i++){
        cin >> so;
        if(a[i-1]+so>=so) a.pb(a[i-1]+so);
        else a.pb(so);
        res = (res>a[i])? res : a[i];
    }
    cout << res;
    return 0;
}