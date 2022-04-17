#include <bits/stdc++.h>
using namespace std;

int y = 0;

bool year(int y) {
    if (y % 400 == 0) return true;
    if (y % 4 == 0 && y % 100 != 0) return true;
    return false;
}

int day(int m) {
    if (m < 8 and m != 2) {
            if (m % 2 != 0) return 31;
            else return 30;
        }
        
    if (m > 7) {
        if (m % 2 == 0) return 31;
        else return 30;
    }

    if (m == 2) { 
        if (year(y)) return 29;
        else return 28;
    }
}

int main() {
    int n = 0;
    int m = 1;
    cin >> n >> y;
    while (n > 0) {
        n -= day(m);
        m++;
    }
    cout << n + day(m - 1) << " " << m - 1;
    return 0;
}
