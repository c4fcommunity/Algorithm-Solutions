#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, S = 0;
    cin >> n;
    for (int i = 1; i <= (3 * n) + 1; i++){
        S += (pow(-1, i + 1)) * i;
    }
    cout << S;
    return 0;
}