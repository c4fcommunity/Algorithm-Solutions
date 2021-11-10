#include <iostream>
#define ll long long
using namespace std;

ll calc(int n){
    ll res = 1;
    for(int i = 1; i<=n; i++) res *= i;
    return res;
}

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << calc(n) << "\n";
    }
    return 0;
}