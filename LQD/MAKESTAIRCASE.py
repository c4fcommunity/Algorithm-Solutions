n=int(input())
a=list(map(int,input().split()))
a.insert(0,0)
kt=True
f=[0]*1000000
for i in range(1,n+1):
    f[i]=a[1]+i-1
    if f[i]<a[i]:
        kt=False
f[n]=a[n]
if kt==False or f[n]>f[n-1]+1:
    print('impossible')
else:
    for i in range(1,n+1):
        print(min(f[i],f[n]),end=' ')