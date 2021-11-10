#include <iostream>
#include <string>
using namespace std;

#define maxn 1000000

string txt,s;
int f[maxn];
int n,m;

void init(){
    int i,j;
    f[0]=0;
    i=1;
    j=0;
    while (i<m){
        if (s[i]==s[j]){
            j+=1;
            f[i]=j;
            i+=1;
        }else{
            if (j!=0){
                j=f[j-1];
            }else{
                f[i]=0;
                i+=1;
            }
        }
    }
    // for (int i=0; i<m; ++i) cout << f[i] << " ";
    // cout << "\n";
}

void kmp(){
    int i,j;
    i=0;
    j=0;
    while (i<n){
        if (txt[i]==s[j]){
            i+=1;
            j+=1;
        }
        if (j==m){
            cout << i-j+1 << " ";
            j=f[j-1];
        }else{
            if (txt[i]!=s[j]){
                if (j!=0){
                    j=f[j-1];
                }else{
                    i+=1;
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    getline(cin,txt);
    getline(cin,s);
    n=txt.length();
    m=s.length();
    init();
    kmp();
    return 0;
}