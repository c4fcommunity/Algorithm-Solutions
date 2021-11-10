t=int(input())
for i in range(t):
    n=int(input())
    if n%2==0:
        print(n*(n+1)//2)
    else:
        print(-n*(n+1)//2)