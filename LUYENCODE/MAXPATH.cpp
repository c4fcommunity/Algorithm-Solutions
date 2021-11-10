#include <iostream>
#define maxn 101
using namespace std;

int a[maxn][maxn];

int main(){
    int n,m,res = -(int)1e9;
    cin >> n >> m;
    for(int i = 0; i<=maxn; i++){
        for(int j = 0; j<=maxn; j++){
            a[i][j] = -(int)1e9;
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 2; j<=m; j++){
        for(int i = 1; i<=n; i++){
            a[i][j] = a[i][j]+max(a[i-1][j-1],max(a[i][j-1],a[i+1][j-1]));
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    for(int i = 1; i<=n; i++){
        res = max(res,a[i][m]);
    }
    //cout << res;
    return 0;
}