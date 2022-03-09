#include <iostream>
#include <math.h>
using namespace std;

int n, A[10000], mi = 0;

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (A[i] < A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for (int j = 1, j1 = j+1; j < n, j1 < n; j++, j1++){
        int tong = 0;
        tong = A[0]*A[j]*A[j1];
        if (tong > mi)
            mi = tong;
    }
    cout << mi;
}
