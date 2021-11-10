#include <iostream>
using namespace std;

#define fori(a,b) for(int i=a; i<=b; i++)
#define forj(a,b) for(int j=a; j<=b; j++)
#define maxn 20

int a[maxn][maxn],res1[maxn*2],res2[maxn*2],n,m;
bool duyet=false;

void inra(int k){
    fori(1,k) cout << res1[i] << " " << res2[i] << "\n";
    duyet=true;
}

void loang(int i, int j, int k, bool kt){
    res1[k]=i;
    res2[k]=j;
    if ((i==n && j==m) && (kt==true && duyet==false)) inra(k);
    if (a[i+1][j]>=0 && i+1<=n)
        if ((a[i+1][j]!=a[i][j] && a[i][j]!=0) && a[i+1][j]!=0) loang(i+1,j,k+1,true);
        else loang(i+1,j,k+1,kt);
    if (a[i][j+1]>=0 && j+1<=m)
        if ((a[i][j+1]!=a[i][j] && a[i][j+1]!=0) && a[i][j]!=0) loang(i,j+1,k+1,true);
        else loang(i,j+1,k+1,kt);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    fori(1,n)
        forj(1,m)
            cin >> a[i][j];
    loang(1,1,1,false);
    if (duyet==false) cout << -1;
    return 0;
}