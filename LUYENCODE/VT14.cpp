#include <iostream>
using namespace std;

void nhapMang(int *a, int n) {
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int timKiem(int *a, int n) {
	int max = 1;
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			int tich = a[i] * a[j];
			if(tich >= max){
				max = tich;
			}
		}
	}
	return max;
}

int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	nhapMang(a,n);
	cout << timKiem(a,n);
	delete[] a;
	return 0;
}
