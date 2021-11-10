#include <iostream>

#define ll long long

using namespace std;

const int N = 1e5 + 1;
ll b[N];
int n,q;

void enter(){
    int so;
    cin >> n >> q;
    b[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> so;
        if (so < 0) b[i] = b[i-1];
        else b[i] = b[i-1]+so;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    enter();
    int x,y;

    while (q--){
        cin >> x >> y;
        cout << b[y]-b[x-1] << "\n";
    }
    return 0;
}