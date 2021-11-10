n, m = map(int, input().split())
a = [0] * 25
b = [0] * 25
res = 0
kt = True
while (n!=0 or m!=0) and (kt==True):
    if n>=m and n>=2 and m>=1:
        a[res] = 2
        b[res] = 1
        res += 1
        n -= 2
        m -= 1
    elif m>n and m>=2 and n>=1:
        a[res] = 1
        b[res] = 2
        res += 1
        n -= 1
        m -= 2
    else:
        kt = False
print(res)
for i in range(res):
    print(a[i], b[i])