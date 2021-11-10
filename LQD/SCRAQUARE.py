import math
n,m=int(input()),int(input())
for i in range(math.trunc(n**0.5),math.trunc(m**0.5)+1):
    print(i*i,end=' ')