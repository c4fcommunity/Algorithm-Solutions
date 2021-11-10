#include <bits/stdc++.h>

#define maxn 1005

using namespace std;

struct arr{
	int gt,l,r;
} f[maxn*maxn];

int a[maxn],res = 0,n,nn = 0;
bool kt[maxn][maxn];
bool ok;

bool cmp(arr so1, arr so2){
	return (so1.gt<so2.gt);
}

void init(){
	for(int i = 1; i<n; i++){
		for(int j = i+1; j<=n; j++){
			++nn;
			f[nn].gt = a[i]+a[j];
			f[nn].l = i;
			f[nn].r = j;
		}
	}
	sort(f+1, f+nn+1, cmp);
}

int search_l(int x){
	int ans,lo,hi,mid;
	lo = 1;
	hi = nn;
	ans = 0;
	while(lo<=hi){
		mid = (lo+hi)/2;
		if(f[mid].gt>=x){
			hi = mid-1;
			if(f[mid].gt==x) ans = mid;
		}else{
			lo = mid+1;
		}
	}
	return ans;
}

int search_r(int x){
	int ans,lo,hi,mid;
	lo = 1;
	hi = nn;
	ans = 0;
	while(lo<=hi){
		mid = (lo+hi)/2;
		if(f[mid].gt<=x){
			lo = mid+1;
			if(f[mid].gt==x) ans = mid;
		}else{
			hi = mid-1;
		}
	}
	return ans;
}

void check(int x){
	int cs,ll,rr;
	for(int i = 1; i<=n; i++){
		cs = x - a[i];
		ll = search_l(cs);
		rr = search_r(cs);
		if(ll!=0 && rr!=0){
			for(int j = ll; j<=rr; j++){
				if(i<f[j].l && f[j].l<f[j].r){
					ok = 1;
				}
			}
		}
	}
}

void solve(){
	for(int i = 1; i<=n; i++){
		ok = 0;
		check(a[i]*3);
		if(ok==1) ++res;
	}
	cout << res;
}

int main(){
	// fast
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	// init
	cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> a[i];
	}
	init();
	
	// solve
	solve();
	return 0;
}