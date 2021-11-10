#include <iostream>

#define ll long long
#define maxn 1000001

using namespace std;

int f[maxn],prime[maxn];

void sieve(){
    prime[0] = prime[1] = 1;
    for(int i = 4; i<=maxn; i+=2){
        prime[i] = 1;
    }
    for(ll i = 3; i<=maxn; i+=2){
        if(prime[i]==0){
            for(ll j=i*i; j<=maxn; j+=i){
                prime[j] = 1;
            }
        }
    }
}

void QHD(){
    for(int i = 2; i<=maxn; i++){
        if(prime[i]==0){
            f[i] = f[i-1]+1;
        }else{
            f[i] = f[i-1];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    sieve();
    QHD();

    int t,l,r;

    cin >> t;
    while(t>0){
        --t;
        cin >> l >> r;
        cout << f[r]-f[l-1] << "\n";
    }
    return 0;
}