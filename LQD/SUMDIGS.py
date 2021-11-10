n=int(input())
for i in range(n):
    s=input()
    res = 0
    for i in s:
        res += int(i)
    print(res)