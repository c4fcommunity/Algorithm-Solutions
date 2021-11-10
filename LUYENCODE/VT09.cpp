#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

int a[10001];

int ktra(int n){
    if(n<2) return 0;
    else for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n,i,count=0;
    
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++)
        if(ktra(a[i]) == 1 && a [i] != a[i-1]) cout<<a[i]<<" ";
    return 0;
}