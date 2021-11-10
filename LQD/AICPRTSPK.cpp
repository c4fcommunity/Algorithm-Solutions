#include <iostream>

#define ll long long
#define maxn 1000001
#define base 1000000007

using namespace std;

bool F[maxn];

ll calc(ll n, ll k){
    ll res = 1,mod = 1;
    for(int i = 1; i<=k; i++){
        res = (res*(n-i))%base;
        mod = (mod*i)%base;
    }
    return (res/mod)%base;
}

int main(){
	ios::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(0);

    ll n,k,res = 0;

	cin >> n >> k;
 
	for(int i = 1, j; i <= n; ++i)
        if(!F[i]){
		    for(j = 1; i*j*j<=n; ++j)
			    F[i*j*j] = true;
		res = (res+calc(j,k)%base)%base;
	}
	cout << res%base;
	return 0;
}