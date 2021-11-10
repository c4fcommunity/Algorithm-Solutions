s=input()
a=[0]*27
res=0
for i in s:
    a[ord(i)-96]+=1
for i in range(1,27):
    if a[i]%2==1:
        res+=1
print(res-1)