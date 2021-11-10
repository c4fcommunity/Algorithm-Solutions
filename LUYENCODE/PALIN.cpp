#include <iostream>
#include <string>
#define maxn 2001

using namespace std;

int f[maxn][maxn];

int main(){
    string s;
    int n;
    getline(cin, s);
    n = s.size();
    s = " "+s;
    for(int i = 1; i<=n; i++){
        for(int j = n; j>=1; j--){
            if(s[i]==s[j]){
                f[i][j] = f[i-1][j+1]+1;
            }else{
                f[i][j] = max(f[i-1][j],f[i][j+1]);
            }
        }
    }
    cout << f[n][1];
    return 0;
}