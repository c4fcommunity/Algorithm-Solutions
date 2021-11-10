#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,x,so,res = 0;

    cin >> n >> x;
    for(int i = 0; i<n; i++){
        cin >> so;
        if(so==x) res++;
    }
    cout << res;
    return 0;
}