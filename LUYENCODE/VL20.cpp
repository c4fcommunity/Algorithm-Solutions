#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    char c1,c2;

    cin >> c1 >> c2;
    for(int i = c1-32; i<=c2-32; i++){
        cout << (char)i << " ";
    }
    return 0;
}