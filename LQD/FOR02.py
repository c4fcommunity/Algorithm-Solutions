n=int(input())
if n%2==0:
    print(n*(n//2)//2)
else:
    print((n+1)*(n//2+1)//2)