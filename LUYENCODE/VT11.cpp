#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,so,so1,so2;
    vector <int> a;

    cin >> n >> so1;
    for(int i = 1; i<n-1; i++){
        cin >> so;
        a.push_back(so);
    }
    cin >> so2;
    
    sort(a.begin(),a.end());
    cout << so1 << " ";
    for(int i = 0; i<n-2; i++) cout << a[i] << " ";
    cout << so2;
    return 0;
}