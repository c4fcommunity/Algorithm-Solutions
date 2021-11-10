#include <iostream>

#define ll long long

using namespace std;

int main(){
    int n;
    ll a,b,c;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a >> b >> c;
        if((a==b || b==c || c==a) && a>0){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}