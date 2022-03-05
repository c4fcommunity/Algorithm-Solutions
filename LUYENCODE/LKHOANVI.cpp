#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, a[10];
    cin >> n;
    for (int i = 1; i <= n; i++){
        a[i] = i;
    }
    do {
        for (int i = 1; i <= n; i++){
            cout << a[i] << (i < n ? " " : "\n");
        }
    } while (next_permutation(a + 1, a + 1 + n));
}
