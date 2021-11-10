#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,a;
    vector <int> vec;

    cin >> n;
    for(int i = 1; i<=n; i++){
        cin >> a;
        vec.push_back(a);
    }

    int max=vec[0];

    for (int i = 1; i<vec.size(); i++){
        if (vec[i]>max) max=vec[i];
    }
    cout << max;
    return 0;
}