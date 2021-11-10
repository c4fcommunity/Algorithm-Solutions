n=int(input())
a=[0]*100
b=a
for i in range(n):
    a[i],b[i]=map(int,input().split())
for i in range(n-1):
    for j in range(i,n):
        if b[i]<b[j]:
            tam=b[i]
            b[i]=b[j]
            b[j]=tam
            tam=a[i]
            a[i]=a[j]
            a[j]=tam
if b[0]!=0:
    print(max(a))