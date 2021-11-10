#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,max,res = 0,so;
    
    cin >> n >> max;
    for(int i = 1; i<n; i++){
        cin >> so;
        if(so>=max){
            max = so;
            res = i;
        }
    }
    cout << res;
    return 0;
}