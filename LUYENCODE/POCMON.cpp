#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long int n, x, y, z;
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        z = n/8;
        x = z*5;
        y = 2*z;
        if (n % 8 == 0 && n != 0)
            cout << x << " " << y << " " << z << endl;
        else
            cout << -1 << endl;
    }
}
