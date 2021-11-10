#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,so;
    vector <int> a;

    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> so;
        a.push_back(so);
    }
    sort(a.begin(),a.end());
    cout << a[n-1]-a[0];
    return 0;
}