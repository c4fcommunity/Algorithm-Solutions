#include <bits/stdc++.h>

#define maxn 3001
#define ll long long

using namespace std;

int a[maxn][maxn];
vector <int> f;

int main(){
    // fast
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // init
    int n,m,r,c,res;
    bool le;

    // solve
    cin >> n >> m >> r >> c;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
        }
    }

    int nn = r*c;
    if(nn%2==0){
        le = 0;
    }else{
        le = 1;
    }

    for(int i = 1; i<=n-r+1; i++){
        for(int j = 1; j<=m-c+1; j++){
            f.clear();
            //res = 0;
            for(int i1 = i; i1<=i+r-1; i1++){
                for(int j1 = j; j1<=j+c-1; j1++){
                    f.push_back(a[i1][j1]);
                }
            }
            sort(f.begin(),f.end());
            if(le==1){
                res = max(res,f[nn/2]);
            }else{
                res = max(res,f[nn/2-1]);
            }
        }
    }
    cout << res;
    return 0;
}