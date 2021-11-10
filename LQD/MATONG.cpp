#include <bits/stdc++.h>
#define ll long long
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0)
using namespace std;

int uoc(int x){
    ll dem = 0;
    for(int i=1; i<=trunc(sqrt(x)); i++)
        if(x%i == 0) dem = dem+2;
    if (trunc(sqrt(x)) == sqrt(x)) dem = dem-1;
    return dem;
}

main(){
    run_fast;
    int n,j,so;
    ll res = 0;
    cin >> n;
    for(j = 0; j<n; j++){
        cin >> so;
        res = res + so*uoc(so);
    }
    cout << res;
}




// #include <bits/stdc++.h>
// #define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// #define pb(x) push_back(x)
// #define ll long long
// #define maxn 1000000

// using namespace std;

// int a[1000000],f[maxn];

// void sang(){
//     int i,j;
//     f[1] = -1;
//     for(i = 4; i<=maxn; i+=2) ++f[i];
//     for(i = 3; i<=maxn; i+=2)
//         if(f[i]==0)
//             for(j = i*2; j<=maxn; j += i)
//                 ++f[j];
//     for(i = 1; i<=10; i++) cout << f[i] << " ";
//     cout << "\n";
// }

// int main(){
//     run_fast;
//     sang();
//     int i,n,so;
//     ll res = 0;
//     cin >> n;
//     for(i = 1; i<=n; i++){
//         cin >> so;
//         if(f[so] == 0) res += so*2;
//         else res += so*(f[so]+2);
//     }
//     cout << res;
//     return 0;
// }