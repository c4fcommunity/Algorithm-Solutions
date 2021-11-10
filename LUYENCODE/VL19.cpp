#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    int count = 0;
    for(int i = b - 1; i > a; i--) {
	    if(i % 3 == 0) {
    		cout << i << " ";
	    	count ++;
	    }
    }
    if(count == 0) {
	    cout << "NOT FOUND";
    }
    return 0;
}