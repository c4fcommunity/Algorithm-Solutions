#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    int n, x, res;
    cin >> n;
    cin >> res;
    for (int i = 1; i < n; i++) {
        cin >> x;
        res = res ^ x;
    }
    cout << res;
}
