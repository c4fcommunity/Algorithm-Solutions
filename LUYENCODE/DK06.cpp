#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int a , b ;
	cin >> a >> b;
	if(a != 0){
		cout << fixed << setprecision(2) << static_cast<double>(-b) / a ;
	}else{
		if(b != 0){
			cout << "NO";
		}else{
			cout << "INF";
		}
	}
	return 0;
}