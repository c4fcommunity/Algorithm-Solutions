#include <bits/stdc++.h>

using namespace std;

int check(int x){
    int res = 1, i = 2, dem = 1;
    while(i<=floor(sqrt(x))){
        dem = 1;
        while(x%i==0){
            x /= i;
            ++dem;
        }
        ++i;
        res *= dem;
    }
    if(x>1) return res*2;
    else return res;
}

int main(){
    int n;
    cin >> n;
    cout << check(abs(n));
    return 0;
}