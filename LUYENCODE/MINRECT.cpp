#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << (max(d, b) - min(b, d)) * (max(c, a) - min(a, c));
}
