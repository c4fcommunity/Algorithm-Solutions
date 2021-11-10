#include <iostream>
using namespace std;

#define maxn 100000

long a[maxn];

int main(){
    int n,l,r,k;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        a[i]+=a[i-1];
    }
    for (int i=1; i<=k; i++){
        cin >> l >> r;
        cout << a[r]-a[l-1] << " ";
    }
    return 0;
}