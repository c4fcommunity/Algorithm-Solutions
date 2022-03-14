#include <iostream>
using namespace std;

int main(){
    long long m, n;
    cin >> m >> n;
    long long o4 = (m / 2) * (n / 2);
	long long dem = o4;
	long long conlai = (m * n) - (4 * o4);
	if (conlai % 2 == 0) 
        dem += conlai / 2;
	else 
        dem += ((conlai / 2) + 1);
	cout << dem;
}
