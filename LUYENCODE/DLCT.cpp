#include <iostream>
using namespace std;

int main(){
    int n, A[10000000], B[10000000], pointA = 0, pointB = 0, timeA = 0, timeB = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    for (int i = 0; i < n; i++){
        cin >> B[i];
    }
    for (int i = 0; i < n; i++){
        if (A[i] != 0)
            pointA++;
        if (B[i] != 0)
            pointB++;
    }
    if (pointA != pointB){
        if (pointA > pointB)
            cout << "1";
        else
            cout << "2";
    }
    else {
        for (int i = 0; i < n; i++){
            timeA += A[i];
            timeB += B[i];
        }
        if (timeA == timeB){
            cout << "Double Win";
        }
        else {
            if (timeA < timeB)
                cout << "1";
            else
                cout << "2";
        }
    }
    return 0;
}
