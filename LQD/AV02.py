n=int(input())
a=[]
res=0
for i in range(n):
    a.append(int(input()))
for i in a:
    if i%2==1:
        res=res+i
print(res)