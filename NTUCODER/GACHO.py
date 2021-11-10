n,m=map(int,input().split())
c=(m-2*n)//2
g=n-c
if (n>=0) and (m>=0) and (m%2!=1) and (c>=0) and (g>=0):
    print(g,c)
else:
    print(-1)