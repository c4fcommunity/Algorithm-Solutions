#include <iostream>
using namespace std;

#define maxn 1000

int a[maxn];

int main(){
    long long n,dem,so,res;
    cin >> n;
    dem=0;
    res=0;
    for (int i=1; i<=n; i++){
        cin >> so;
        a[so]+=1;
    }
    for (int i=1; i<=1000; i++){
        if (a[i]>1) ++dem;
        if (a[i]>3) ++res;
    }
    res+=dem*(dem-1)/2;
    cout << res;
    return 0;
}