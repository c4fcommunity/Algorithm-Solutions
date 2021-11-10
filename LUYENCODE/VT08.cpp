#include <bits/stdc++.h>

#define MAXN 1007

using namespace std;

int arr[MAXN];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int n; 

    cin >> n;
    for(int i = 1; i<=n; i++) cin >> arr[i];
    for(int i = 1; i<=n; i++){
        if(i%2==0) arr[i] += abs(arr[i-1] - arr[i+1]);
        cout << arr[i] << " ";
    }
    return 0;
}