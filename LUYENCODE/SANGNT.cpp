#include <iostream>

#define ll long long
#define maxn 1000001

using namespace std;

bool f[maxn];

void sang_nt(int n){
    f[1] = true;
    for(int i = 4; i<=n; i+=2) f[i] = true;
    for(ll i = 3; i<=n; i+=2)
        if(f[i]==false)
            for(ll j = i*i; j<=n; j+=i)
                f[j] = true;
}

int main(){
    iostream::sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;

    cin >> n;
    sang_nt(n);
    for(int i = 2; i<=n; i++){
        if(f[i]==false) cout << i << " ";
    }
    return 0;
}