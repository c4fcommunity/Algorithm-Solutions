#include <iostream>
#include <string>
#define maxn 2001
using namespace std;

int f[maxn][maxn];

int main(){
    string s1,s2;
    int n,m;

    getline(cin,s1);
    getline(cin,s2);
    n = s1.size();
    m = s2.size();
    s1 = " "+s1;
    s2 = " "+s2;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            if(s1[i]==s2[j]){
                f[i][j] = f[i-1][j-1]+1;
            }else{
                f[i][j] = max(f[i-1][j],f[i][j-1]);
            }
        }
    }
    cout << f[n][m];
    return 0;
}