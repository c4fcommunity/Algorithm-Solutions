#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int dem=0,n,so,nho,res=0;
    cin >> n >> nho;
    for (int i=2; i<=n; i++){
        cin >> so;
        if (so==nho){
            dem+=1;
        }else{
            res=max(res,dem);
            dem=0;
        }
        nho=so;
    }
    res=max(res,dem);
    cout << n-(res+1);
    return 0;
}