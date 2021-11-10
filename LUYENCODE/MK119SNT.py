# init
maxn=1000000
a=[0]*(maxn+1)
f=[0]*(maxn+1)
a[1]=1
for i in range(1,maxn+1):
    if a[i]==0:
        for j in range(2,(maxn//i)+1):
            a[i*j]=1
for i in range(1,maxn+1):
    if a[i]==0:
        f[i]=f[i-1]+1
    else:
        f[i]=f[i-1]
# main
n=int(input())
for i in range(n):
    l,r=map(int,input().split())
    print(f[r]-f[l-1])