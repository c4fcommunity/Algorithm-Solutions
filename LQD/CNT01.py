n=int(input())
a=list(map(int,input().split()))
a.insert(0,0)
f=[0]*1000000
for i in range(1,n+1):
    f[a[i]]+=1
for i in range(1,n+1):
    print(a[i],f[a[i]])