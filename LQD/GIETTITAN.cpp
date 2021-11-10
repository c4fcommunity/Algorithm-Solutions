#include <iostream>
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main(){
    run_fast;
    int t;
    cin >> t;
    while (t != 0){
        --t;
        long long n ,m;
        cin >> n >> m;
        long long cp = n / 32;
        if (m > cp) cout << "YES\n";
        if (m < cp) cout << "NO\n";
        if (m == cp) cout << ((n % 32 == 0)? "YES\n" : "NO\n");
    }
    return 0;
}