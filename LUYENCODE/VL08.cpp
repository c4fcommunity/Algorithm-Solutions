#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a,b,res = 0;
    cin >> a >> b;
    for(int i = a; i<=b; i++){
        if(i%2==0) res += i;
    }
    cout << res;
    return 0;
}