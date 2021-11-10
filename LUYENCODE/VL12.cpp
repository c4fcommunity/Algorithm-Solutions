#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;

    cin >> n;
    if(n==0){
        cout << "INF";
        return 0;
    }
    n = abs(n);
    for(int i = n; i>0; i--){
        if(n%i==0) cout << i << " ";
    }
    return 0;
}