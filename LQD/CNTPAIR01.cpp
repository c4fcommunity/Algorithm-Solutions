#include <iostream>
#define maxn 100000
#define ll long long
using namespace std;

int a[maxn] = {0};

int main(){
	int n,so;
	ll res = 0;
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> so;
		a[so] += 1;
	}
	for(int i = 1; i<=maxn; i++){
		res = res+(a[i]*(a[i]-1))/2;
	}
	cout << res;
	return 0;
}
