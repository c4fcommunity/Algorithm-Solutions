s=input()
f=[0]*10
t=0
for i in s:
    cs=ord(i)
    f[cs-48]+=1
    t=t+cs-48
if f[0]>0 and t%3==0:
    for i in range(9,-1,-1):
        for j in range(f[i]):
            print(i,end='')
else:
    print(-1)