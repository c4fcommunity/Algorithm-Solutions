#include <iostream>
using namespace std;

#define max 100000

int a[max],dem[max];

void sang(){
    a[1]=0;
    dem[1]=0;
    int i;
    for(int i=2; i<=max; i++)
        if (a[i]==0)
            for(int j=2; j<=max/i; j++){
                if (a[i*j]==0) dem[i]+=1;
                a[i*j]=1;
            }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    long long so;
    sang();
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> so;
        if (so>max){
            cout << 0 << "\n";
        }else{
            cout << dem[so]+1 << "\n";
        }
    }
    return 0;
}