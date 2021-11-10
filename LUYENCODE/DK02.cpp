#include <bits/stdc++.h>
using namespace std;

int main(){
    int so;
    vector <int> a;
    for(int i = 1; i<4; i++){
        cin >> so;
        a.push_back(so);
    }
    sort(a.begin(), a.end(), greater<int>());
    cout << a[0];
    return 0;
}