#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int k;
    long long n,d;

    cin >> k;
    while(k--){
        d = 0;
        cin >> n;
        while (n>1){
          if (n%2==1) n=3*n+1;
          else n=n/2;
          d++;
        }
       cout << d <<"\n";
    }
}