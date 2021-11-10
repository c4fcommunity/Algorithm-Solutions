#include <iostream>
#define maxn 100001
using namespace std;

int a[maxn],f[maxn];

int main(){
    int n,nn = 0;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    f[1] = 1;
    nn = 1;
    for(int i = 2; i<=n; i++){
        if(a[i]>a[f[nn]]){
            ++nn;
            f[nn] = i;
        }else{
            int lo = 1,hi = nn,mid;
            while(lo<hi){
                mid = (lo+hi)/2;
                if(a[f[mid]]>=a[i]){
                    hi = mid;
                }else{
                    lo = mid+1;
                }
            }
            f[lo] = i;
        }
    }
    cout << nn;
    return 0;
}