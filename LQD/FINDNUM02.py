n=int(input())
res=1
def nt(x):
    for i in range(2,math.trunc(math.sqrt(n))+1):
        if x%i==0:
            return False
    return True
for i in range(2,n):
    if nt(i):
        res=res*i
print(res)