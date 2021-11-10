n=int(input())
a=list(map(int,input().split()))
a.insert(0,0)
f=[0,0]
maxgt=1000000000
n=n+1
for i in range(2,n):
    f.append(maxgt)
    for j in range(max(1,i-2),i):
        f[i]=min(f[i],f[j]+abs(a[i]-a[j]))
print(f[n-1])