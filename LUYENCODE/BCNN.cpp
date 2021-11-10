#include<iostream>

using namespace std;

int gcd(long long a, long long b) {
	if(b == 0)
		return a;
	return gcd(b, a%b);
}

long long lcm(long long a, long long b) { 
	return (a*b)/gcd(a, b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	long long a, b;
	cin >> a >> b;
	cout << lcm(a, b);
	return 0;
}