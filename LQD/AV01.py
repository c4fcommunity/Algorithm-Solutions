n=int(input())
a=[]
res=0
a=list(map(int,input().split()))
for i in a:
    if i%2==0:
        res=res+i
print(res)