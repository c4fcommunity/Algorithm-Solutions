#include <bits/stdc++.h>

using namespace std;

int ucln(int a, int b){
    if(a==0 || b==0) return max(abs(a),abs(b));
    int t = b%a;
    while(t!=0){
        t = a%b;
        a = b;
        b = t;
    }
    return abs(a);
}

int main(){
    int x,y;
    cin >> x >> y;
    cout << ucln(x,y);
    return 0;
}