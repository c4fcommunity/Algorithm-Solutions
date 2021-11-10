#include <bits/stdc++.h>
#define fori(a,b) for(int i=a; i<=b; i++)
#define forj(a,b) for(int j=a; j<=b; j++)
#define pub(x) push_back(x)
#define puf(x) push_front(x)
#define pob() pop_back()
#define pof() pop_front()
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long

using namespace std;

deque <int> a;
int n,k;

int search_trai(){
    return res;
}

int search_phai(){
    return res;
}

int main(){
    run_fast
    int so;
    cin >> n >> k;
    n -= 1;
    fori(0,n){
        cin >> so;
        a.pub(so-k);
    }
    sort(a.begin(),a.end());
    fori(0,n) cout << a[i] << " ";
    return 0;
}