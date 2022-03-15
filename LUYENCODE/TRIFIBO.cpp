#include <iostream>
using namespace std;

int main(){
    long long T[1000];
    T[0] = 1, T[1] = 1, T[2] = 1;
    for (int i = 3; i <= 127; i++){
        if (i % 2 == 0)
            T[i] = T[i-1] - 1;
        else
            T[i] = T[i-1] + T[i-2];
    }
    int q;
    cin >> q;
    while (q--){
        int n;
        cin >> n;
        cout << T[n] << endl;
    }
    return 0;
}
