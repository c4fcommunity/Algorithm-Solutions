#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long x,n,s = 1,gt = 1;
    double res = 0;

    cin >> x >> n;
    for(long long i = 1; i<=n; i++){
        gt *= i;
        s *= x;
        res += (1.0*s)/gt;
    }
    cout << setprecision(2) << fixed << res;
    return 0;
}