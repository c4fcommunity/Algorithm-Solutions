#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int year;
	cin >> year ;
	if(year <= 0 || year > 100000){
		cout << "INVALID" ;
	}else{
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
			cout << "YES";
		}else{
			cout << "NO";
		}
	}
	return 0;
}