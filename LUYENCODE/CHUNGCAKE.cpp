#include <iostream>
#define maxn 2001

using namespace std;

int a[31];
bool f[maxn];

int main(){
    int n,k,res;
    cin >> n >> k;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    f[0] = 1;
    for(int i = 1; i<=n; i++){
        for(int j = k; j>=a[i]; j--){
            if(f[j]==0 && f[j-a[i]]==1){
                f[j] = 1;
            }
        }
    }

    for(int i = k; i>=0; i--){
        if(f[i]==1){
            res = i;
            break;
        }
    }
    cout << res;
    return 0;
}