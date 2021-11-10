#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,x,so;

    cin >> n >> x;
    for(int i = 0; i<n; i++){
        cin >> so;
        if(so==x){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}