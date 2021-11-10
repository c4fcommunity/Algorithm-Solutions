#include <iostream>

#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n,res;
    cin >> n;
    res = (n+2)*(n-1)/2+2*n;
    cout << res;
    return 0;
}