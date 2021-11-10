t = int(input())
for i in range(t):
    n,m = map(int,input().split())
    a = (m-1) // (n-1)*n
    b = m % (n-1)
    if b==0:
        b=n-1
    print(a+b)