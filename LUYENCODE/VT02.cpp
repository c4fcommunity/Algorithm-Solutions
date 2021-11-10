#include <bits/stdc++.h>
#define maxn 1000001
using namespace std;

int a[maxn];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1, greater<int>());
    for(int i = 2; i<=n; i++){
        if(a[i]!=a[i-1]){
            cout << a[i];
            return 0;
        }
    }
    cout << "NOT FOUND";
    return 0;
}