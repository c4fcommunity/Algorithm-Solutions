#include <iostream>
#include <vector>

#define ll long long

using namespace std;

vector <ll> a;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll so,ii,jj,n,k;

    cin >> n;
    a.push_back(0);
    for(int i = 1; i<=n; i++){
        cin >> so;
        a.push_back(a[i-1]+so);
    }
    cin >> k;
    for(int i = 1; i<=k; i++){
        cin >> ii >> jj;
        cout << a[jj]-a[ii-1] << "\n";
    }
    return 0;
}