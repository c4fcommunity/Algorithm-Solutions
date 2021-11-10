n=int(input())
a=list(map(int,input().split()))
a.sort(reverse=True)
for i in a:
    print(i,end=' ')