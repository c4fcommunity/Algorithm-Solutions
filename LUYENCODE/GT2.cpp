#include <iostream>

#define FOR(i, l, r) for(int i = l; i <= r; ++i)
#define FOD(i, l, r) for(int i = l; i >= r; --i)

#define ll long long
#define ug unsigned long long

using namespace std;

void factorials(int n){
    int A[500000];
    int	m = 1;
    ll 	r = 0, q;
    A[0] = 1;
	FOR(i, 2, n){
     	FOR(j, 0, m-1){
           	q = r;
           	r = (A[j] * i + r) / 10;
          	A[j] = (A[j] * i + q) % 10;
   		}
     	while (r > 0){
          	A[m] = r % 10;
          	++m;
          	r /= 10;
   		}
 	}
	FOD(i, m-1, 0) cout << A[i];
	cout << endl;
}
int main(){
    int T, k;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		cin >> T;
		while (T){
			cin >> k;
			factorials(k);
			--T;
		}
	return 0;
}
