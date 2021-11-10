#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,so,res = 0,dem = 0;

    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> so;
        if(so%2!=0){
            res += so;
            ++dem;
        }
    }
    cout << fixed << setprecision(4) << 1.0*res/dem;
    return 0;
}