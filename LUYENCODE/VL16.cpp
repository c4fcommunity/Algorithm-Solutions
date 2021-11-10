#include <iostream>
#include <cmath>

using namespace std;

int GCD(int a, int b){
    if(a==0) return 1;
    int t = b%a;
    while(t!=0){
        t = a%b;
        a = b;
        b = t;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a,b;

    cin >> a >> b;
    cout << abs(a)*abs(b)/GCD(abs(a),abs(b));
    return 0;
}