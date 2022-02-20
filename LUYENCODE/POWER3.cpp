#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        double tmp = pow(n, 1.0/3);
        long long c = (long long) tmp;
        cout << ((c*c*c == n || (c+1)*(c+1)*(c+1) == n) ? "YES\n" : "NO\n");
    }
}
