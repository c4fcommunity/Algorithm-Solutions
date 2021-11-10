#include <bits/stdc++.h>
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main(){
    run_fast;
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a/b>c/d) cout << "YES";
    else cout << "NO";
    return 0;
}