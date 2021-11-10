#include <iostream>
#define ll long long
using namespace std;

int main(){
    int n;
    ll res = 0,t = 0;
    cin >> n;
    for(int i = 1; i<=n; i++){
        t += i;
        res += t;
    }
    cout << res;
    return 0;
}