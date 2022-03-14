#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == 1)
            res -= 1;
        if (arr[i] == 2)
            res += 1;
    }
    cout << abs(res);
}
