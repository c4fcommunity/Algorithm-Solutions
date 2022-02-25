#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int t, n;
    double sum[1000000];
    cin >> t;
    sum[1] = 1;
    for (int i = 2; i <= 1000000; i++){
     	sum[i] = sum[i - 1] + (double)1.0/i;
    }
    for (int i = 0; i < t; i++){
        cin >> n;
        cout << fixed << setprecision(5) << sum[n] << endl;
    }
}
