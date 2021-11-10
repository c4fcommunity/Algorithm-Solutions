#include <iostream>
#include <iomanip>
using namespace std;

#define pi 3.14

int main(){
    double r;
    cin >> r;
    cout << setprecision(3) << fixed << r*2*pi << " ";
    cout << setprecision(3) << fixed << (r*r*pi);
}