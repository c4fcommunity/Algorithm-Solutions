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

    int n,m;

    cin >> n >> m;
    if(m==0 || n==0){
        if(m==0) cout << "INVALID";
        else cout << 0 << " " << m;
    }else{
        int cs = GCD(abs(n),abs(m));
        if(n<0 && m<0){
            if(abs(m)/cs==1) cout << abs(n)/cs;
            return 0;
        }
        if(abs(m)/cs==1){
            cout << n/cs;
            return 0;
        }
        cout << n/cs << " " << m/cs;
    }
    return 0;
}