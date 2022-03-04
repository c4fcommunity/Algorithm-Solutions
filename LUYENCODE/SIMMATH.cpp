#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b, c;
        cin >> a >> b >> c;
        
        long long m1, m2, m3;
        
        m1 = (a * (a + 1) / 2) % 998244353;
        m2 = (b * (b + 1) / 2) % 998244353;
        m3 = (c * (c + 1) / 2) % 998244353;
        
        long long res = (m1 * m2) % 998244353;
        
        res = (res * m3) % 998244353;
        cout << res << '\n';
    }
    return 0;
}
