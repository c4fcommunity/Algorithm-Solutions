#include <iostream>
using namespace std;

string tong (string n){
    long long t = 0; 
    string kq = "";
    for (int i = n.size() - 1; i >= 0; i--)
        t = t + int(n[i] - '0');
    while (t > 0) {
        kq = kq + char((t % 10) + '0');
        t = t / 10;
    }
    return kq;
}

int main(){
   string n;
   cin >> n;
   while (n.size() > 1) {
      n = tong(n);
   }
   cout << n;
}
