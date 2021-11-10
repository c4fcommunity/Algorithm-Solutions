#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

ll sqr(ll n){
    return n*n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll res = 1;
    int n;

    cin >> n;
    if(n<1){
        cout << "NO";
        return 0;
    }

    for(int i = 2; i<=trunc(sqrt(n)); i++){
        if(n%i==0){
            res += i+n/i;
        }
    }

    if(sqr(trunc(sqrt(n)))==n) res -= trunc(sqrt(n));

    if(res==n) cout << "YES";
    else cout << "NO";
    return 0;
}