#include <bits/stdc++.h>
using namespace std;

int main(){
    set <int>::iterator x;
    set <int> s;
    int n,m,so,i;

    cin >> n >> m;
    for(i = 0; i<n; i++){
        cin >> so;
        s.insert(so);
    }
    for(i = 0; i<m; i++){
        cin >> so;
        x = s.find(so);
        if(x==s.end()) cout << 0;
        else cout << 1;
    }
    return 0;
}