#include <iostream>

#define ll long long
#define maxn 100000

using namespace std;

ll maxx = 1000000000;
int a[maxn],f[maxn];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int i,j,n,k;
    cin >> n >> k;
    for(i = 1; i<=n; i++) cin >> a[i];
    f[1] = 0;
    for(i = 2; i<=n; i++){
        f[i] = maxx;
        for(j = max(i-k,1); j<i; j++)
            f[i] = min(f[i],f[j]+abs(a[i]-a[j]));
    }
    cout << f[n];
    return 0;
}