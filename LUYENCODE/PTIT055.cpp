#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    for (long long i = 0; i < 31; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
