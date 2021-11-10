#include <iostream>

#define maxn 1000001

using namespace std;

int a[maxn],f[maxn];

int main(){
    // fast
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // init
    int n,nn;
    cin >> n;
    for(int i = 1; i<=n; i++) cin >> a[i];

    // solve
    nn = 1;
    f[1] = 1;
    for(int i = 2; i<=n; i++){
        if(a[i]>a[f[nn]]){
            ++nn;
            f[nn] = i;
        }else{
            int lo = 1, hi = nn;
            int mid;
            while(lo<hi){
                mid = (lo+hi)/2;
                if(a[f[mid]]<a[i]){
                    lo = mid+1;
                }else{
                    hi = mid;
                }
            }
            f[lo] = i;
        }
    }
    cout << nn;
    return 0;
}