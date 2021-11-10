#include <bits/stdc++.h>

#define base 1000000007
#define ll unsigned long long

using namespace std;

ll F[2][2],m[2][2],n;

void init(){
	F[0][0] = F[0][1] = F[1][0] = 1;
	m[0][0] = m[0][1] = m[1][0] = 1;
	F[1][1] = 0; m[1][1] = 0;
}

void Do_solve(ll M[2][2]){
    ll x = ((F[0][0]*M[0][0])%base+(F[0][1]*M[1][0])%base)%base;
    ll y = ((F[0][0]*M[0][1])%base+(F[0][1]*M[1][1])%base)%base;
    ll z = ((F[1][0]*M[0][0])%base+(F[1][1]*M[1][0])%base)%base;
    ll w = ((F[1][0]*M[0][1])%base+(F[1][1]*M[1][1])%base)%base;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void pow(ll f[2][2], ll nn){
	if(nn<2) return;
	pow(F,nn/2);
	Do_solve(f);
	if(nn%2==1) Do_solve(m);
}

void solve(){
	init();
	pow(F,n);
	cout << F[0][0] << "\n";
}

int main(){
	// fast
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	// init
	int t;
	
	// solve
    cin >> n;
    solve();
    return 0;
}