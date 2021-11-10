#include <iostream>

using namespace std;

long long f[101];

int main(){
    ios_base::sync_with_stdio(0);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;

    cin >> n;
    f[1] = f[2] = 1;
    for(int i = 3; i<=n; i++) f[i]=f[i-1]+f[i-2];
    for(int i = 1; i<=n; i++) cout << f[i] <<" ";
}