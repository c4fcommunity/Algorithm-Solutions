f = [0]*100
f[1] = 1
f[2] = 2
i=0
for i in range(3,91):
    f[i] = f[i-1]+f[i-2]
t=int(input())
while t>0:
    t = t-1
    n=int(input())
    print(f[n])