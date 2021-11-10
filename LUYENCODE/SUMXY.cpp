#include <iostream>
#include <vector>

#define ll long long

using namespace std;

vector <ll> a;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m,so,ii,jj;

    cin >> n >> m;
    a.push_back(0);
    for(int i = 1; i<=n; i++){
        cin >> so;
        a.push_back(a[i-1]+so);
    }
    for(int i = 1; i<=m; i++){
        cin >> ii >> jj;
        cout << a[jj]-a[ii-1] << "\n";
    }
    return 0;
}