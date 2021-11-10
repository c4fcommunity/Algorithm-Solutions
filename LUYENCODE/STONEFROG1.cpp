#include <iostream>

#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ss greater<int>()
#define pub(x) push_back(x)
#define puf(x) push_front(x)
#define pob() pop_back()
#define pof() pop_front()
#define ll long long
#define maxn 100011
#define maxx 1000000000000

using namespace std;

ll a[maxn],f[maxn];

int main(){
    run_fast;
    int n,i,j;
    cin >> n;
    for(i = 1; i<=n; i++) cin >> a[i];
    f[1] = 0;
    f[2] = abs(a[2]-a[1]);
    for(i = 3; i<=n; i++)
        f[i] = min(f[i-1]+abs(a[i]-a[i-1]),f[i-2]+abs(a[i]-a[i-2]));
    cout << f[n];
    return 0;
}