#include <iostream>

#define ll long long
#define base 123456789

using namespace std;

ll sqr(ll so){
    return so*so;
}

ll pow(ll n){
    if(n==1) return 2;
    if(n%2==0) return sqr(pow(n/2)%base)%base;
    else return (2*pow(n-1))%base;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin >> n;
    if(n==1) cout << 1;
    else cout << pow(n-1);
    return 0;
}