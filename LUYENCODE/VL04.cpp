#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    double res = 0;
    cin >> n;
    for(int i = 2; i<=n; i++){
        res += (double)1/i;
    }
    cout << fixed << setprecision(4) << res;
    return 0;
}