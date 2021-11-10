#include <iostream>

using namespace std;

void run_case() {
	int n;
	cin >> n;
	if (n == 1) 
		cout << 1 << '\n';
	else if (n < 10) {
		for (int i = 1; i <= n; ++i)
			cout << i;
		for (int i = n - 1; i >= 1; --i)
			cout << i;
	}else{
		for (int i = 1; i <= (n - 1) / 9; ++i)
			cout << "123456790";
		if ((n - 1) % 9 != 0) {
			for (int j = 1; j <= (n - 1) % 9 + 1; ++j) 
				cout << j;
			for (int j = 1; j <= (n - 1) % 9 - 1; ++j) 
				cout << (n - 1) % 9 + 1 - j;
		}
		for (int i = 1; i <= (n - 1) / 9; ++i) 
			cout << "098765432";
		cout << 1;
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    run_case();
    return 0;
}