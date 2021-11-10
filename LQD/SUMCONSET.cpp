#include <iostream>
#include <queue>
#include <cmath>
#include <algorithm>

#define ll long long

using namespace std;

queue <int> a;

int main(){
    // fast
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // init
    ll n,x,t = 0,res = 0,s;

    // solve
    cin >> n >> s >> x;
    if(x<=s){
        res = 1;
        t = x;
        a.push(x);
    }

    for(int i = 1; i<n; i++){
        cin >> x;
        t += x;
        a.push(x);
        while(t>s){
            t -= a.front();
            a.pop();
        }
        res = (res > a.size())? res : a.size();
    }
    cout << res;
    return 0;
}