#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,so;
    long long ans=-1000000000000000,res=0;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> so;
        if (res>=0){
            res+=so;
            ans=max(ans,res); 
        }else{
            res=so;
            ans=max(ans,res);
        }
    }
    cout << ans;
    return 0;
}