#include <iostream>

#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ss greater<int>()
#define pub(x) push_back(x)
#define puf(x) push_front(x)
#define pob() pop_back()
#define pof() pop_front()
#define ll long long
#define maxn 101
#define maxm 100011

using namespace std;

int a[maxn],b[maxn];
ll f[maxn][maxm];

int main(){
    run_fast;
    int n,m,i,j;
    cin >> n >> m;
    for(i = 1; i<=n; i++) cin >> a[i] >> b[i];
    for(i = 1; i<=n; i++)
        for(j = 1; j<=m; j++)
            if(j>=a[i]) f[i][j] = max(f[i-1][j-a[i]]+b[i],f[i-1][j]);
            else f[i][j] = f[i-1][j];
    cout << f[n][m];
    return 0;
}
