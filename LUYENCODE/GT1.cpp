#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n,res = 1;
    cin >> n;
    for(int i = 2; i<=n; i++) res *= i;
    //if(n==0) res = 0;
    cout << res;
    return 0;
}