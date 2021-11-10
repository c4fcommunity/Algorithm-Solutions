#include <bits/stdc++.h>
#define maxn 3050
#define ll long long
using namespace std;

int main(){
	// fast
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	// init
	ll f[maxn][maxn] = {0};
	int n,m,i,j;
	string s1,s2,res;
	
	// solve: DP
	getline(cin, s1);
	getline(cin, s2);
	n = s1.size();
	m = s2.size();
	s1 = " "+s1;
	s2 = " "+s2;
	res = "";
	for(i = 1; i<=n; i++){
		for(j = 1; j<=m; j++){
			f[i][j] = max(f[i][j-1],f[i-1][j]);
			if(s1[i]==s2[j]){
				f[i][j] = max(f[i][j],f[i-1][j-1]+1);
			}
		}
	}
	
	while(n>0 && m>0){
		if(s1[n]==s2[m]){
			res = s2[m] + res;
			n = n-1;
			m = m-1;
		}else{
			if(f[n-1][m]>f[n][m-1]){
				n = n-1;
			}else{
				m = m-1;
			}
		}
	}
	cout << res;
	return 0;
}
