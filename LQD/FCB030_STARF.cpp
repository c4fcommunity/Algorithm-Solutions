#include <bits/stdc++.h>
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb(x) push_back(x)
#define x first
#define y second
#define ll long long
using namespace std;

int main(){
    run_fast;
    int t;
    cin >> t;
    for(int test = 0; test<t; test++){
        vector <pair <int,int> > a;
        int n,i,k,so;
        ll res = 0;

        cin >> n >> k;
        for(i = 0; i<n; i++){
            cin >> so;
            a.pb(make_pair(so,0));
        }
        for(i = 0; i<n; i++){
            cin >> so;
            a[i].y = so;
        }
        sort(a.begin(),a.end());
        for(i = 0; i<n; i++)
            if(a[i].x <= k) res += a[i].y;
            else break;
        cout << res << "\n";                    
    }
    return 0;
}