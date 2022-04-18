#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int count = 0;
    for (int i = m; i <= n; i++){
        for (int j = i; j > 0; j /= 10){
            if (j % 10 == 5)
                count++;
        }
    }
    cout << count;
}
