#include <iostream>
#include <vector>

#define ll long long

using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

	int n;
    ll answer = 0;
    cin >> n;
	vector <ll> a(n + 1, 0);
    vector <int> cnt(n + 2, 0);

	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		a[i] += a[i - 1];
	}

	if (a[n]%3==0){
		for(int i = n-1; i>0; --i) {
			cnt[i] = cnt[i+1] + (a[n]-a[i]==a[n]/3);
		}
		for(int i = 1; i<=n; ++i)
            if(a[i]==a[n]/3) answer += cnt[i + 1];
	}
	cout << answer << "\n";
	return 0;
}