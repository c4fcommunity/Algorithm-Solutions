#include <bits/stdc++.h>
#define run_fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ss greater<int>()
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front
#define ll long long
#define maxn 100000
using namespace std;

int main(){
    //run_fast;
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++)
        if(i%3==0 && i%5!=0)
            cout << i << " ";
    return 0;
}