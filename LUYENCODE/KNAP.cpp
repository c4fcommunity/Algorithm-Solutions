#include <iostream>
#define maxn 5001
using namespace std;

int f[maxn][maxn];

int main(){
    int n,m,x,y;
    cin >> n >> m;
    for(int i = 1; i<=n; i++){
        cin >> x >> y;
        for(int j = 1; j<=m; j++){
            if(j>=x){
                f[i][j] = max(f[i-1][j],f[i-1][j-x]+y);
            }else{
                f[i][j] = f[i-1][j];
            }
        }
    }
    cout << f[n][m];
    return 0;
}