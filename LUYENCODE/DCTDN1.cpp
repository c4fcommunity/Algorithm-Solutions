#include <iostream>
#define maxn 1001
using namespace std;

int a[maxn],f[maxn];

int main(){
    int n,res;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    f[1] = 1;
    res = 1;
    for(int i = 2; i<=n; i++){
        f[i] = 1;
        for(int j = 1; j<i; j++){
            if(a[i]>a[j]){
                f[i] = max(f[i],f[j]+1);
                res = max(res,f[i]);
            }
        }
    }
    cout << res;
    return 0;
}