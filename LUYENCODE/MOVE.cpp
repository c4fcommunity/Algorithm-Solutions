#include <iostream>

#define maxn 501
#define INF 1000000007

using namespace std;

int a[maxn][maxn];

int main(){
    // fast
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // init
    int n,m,i,j;
    for(i = 0; i<=maxn; i++){
        for(j = 0; j<=maxn; j++){
            a[i][j] = -INF;
        }
    }

    // solve
    cin >> n >> m;
    for(i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
        }
    }

    for(i = 1; i<=n; i++){
        for(j = 1; j<=m; j++){
            if(i==1 && j==1){
                continue;
            }
            a[i][j] = a[i][j]+max(a[i-1][j],a[i][j-1]);
        }
    }
    cout << a[n][m];
    return 0;
}