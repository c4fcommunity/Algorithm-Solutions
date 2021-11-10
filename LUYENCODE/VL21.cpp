#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long n;

    cin >> n;
    cout << trunc(sqrt(n*2+0.25)-0.5);
    return 0;
}