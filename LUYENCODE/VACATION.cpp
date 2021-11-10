#include <iostream>

#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ss greater<int>()
#define pub(x) push_back(x)
#define puf(x) push_front(x)
#define pob() pop_back()
#define pof() pop_front()
#define ll long long
#define maxn 100000

using namespace std;

int a[maxn],b[maxn],c[maxn],f[maxn][3];

int main(){
    run_fast;
    int n,i;
    cin >> n;
    for(i = 1; i<=n; i++) cin >> a[i] >> b[i] >> c[i];
    for(i = 1; i<=n; i++){
        f[i][1] = max(f[i-1][2],f[i-1][3])+a[i];
        f[i][2] = max(f[i-1][1],f[i-1][3])+b[i];
        f[i][3] = max(f[i-1][1],f[i-1][2])+c[i];
    }
    cout << max(max(f[n][1],f[n][2]),f[n][3]);
    return 0;
}