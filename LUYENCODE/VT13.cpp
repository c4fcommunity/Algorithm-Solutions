#include <iostream>

using namespace std;

int a[10001],b[5];

int main (){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;

    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    a[n] = a[0];
    int max = 0, sum = 0;
    for (int i=0; i<n; i++){
        sum = a[i] + a[i+1];
        if (sum >= max){
            max = sum;
            b[0] = a[i];
            b[1] = a[i+1];
        }
    }
    cout << b[0] << " " << b[1];
    return 0;
}