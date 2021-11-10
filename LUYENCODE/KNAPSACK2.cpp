#include <iostream>

#define ll long long
#define maxn 101
#define maxx 100001

using namespace std;

ll f[maxx];
int w[maxn], v[maxn];

int main(){
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, W, i, j;

    cin >> N >> W;
    for(i = 0; i < N; ++i) cin >> w[i] >> v[i];
    for(i = 0; i < maxx; ++i) f[i] = 1e18;
    f[0] = 0;
    for(i = 0; i<N; ++i)
        for(j = maxx-1; j>=0; j--)
            if(f[j]+w[i]<=W) f[j+v[i]] = min(f[j+v[i]], f[j]+w[i]);
    for(i=maxx-1; i>=0; i--)
        if(f[i] != 1e18){
            cout << i;
            break;
        }
    return 0;
}