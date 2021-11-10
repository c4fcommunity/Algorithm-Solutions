#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i, l, m = 0, n;
    string st, s, k;

    cin >> n;
    cin >> st;

    for (i = 0; i <= n - 1; i++){
        for (l = m + 1; l <= (n - i); l++){
            k = st.substr(i, l);
            s = st;
            s.erase(0,i + l);
            if (s.find(k) != -1) m = (m > l)? m: l;
            else break;
        }
    }
    cout << m;
}