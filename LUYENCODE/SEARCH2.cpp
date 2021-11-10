#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int,int> a;
    map <int,int>::iterator x;
    int n,m,i,so;

    cin >> n >> m;
    cin >> so;
    a[so] = 1;

    for(i = 1; i<n; i++){
        cin >> so;
        if(a.find(so)==a.end()) a[so] = i+1;
    }

    for(i = 0; i<m; i++){
        cin >> so;
        x = a.find(so);
        if(x==a.end()) cout << 0 << " ";
        else cout << a[so] << " ";
    }
    return 0;
}