#include <iostream>
#define maxn 10001
using namespace std;

int a[maxn],f[maxn];

int main(){
    int n,k,res;
    cin >> n >> k;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    f[0] = 0;
    f[1] = a[1];
    res = a[1];
    for(int i = 2; i<=n+1; i++){
        f[i] = -(int)1e9;
        for(int j = max(0,i-k); j<i; j++){
            f[i] = max(f[i],f[j]+a[i]);
            res = max(res,f[i]);
        }
    }
    cout << res;
    return 0;
}