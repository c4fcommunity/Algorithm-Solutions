#include <bits/stdc++.h>
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ss greater<int>()
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define ll long long
#define maxn 100
using namespace std;

int a[maxn];

int main(){
    int n,so,res = 0;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> so;
        a[so] += 1;
    }
    for(int i = 1; i<101; i++)
        if(a[i]>1)
            res = res + a[i]/2;
    cout << res;
    return 0;
}