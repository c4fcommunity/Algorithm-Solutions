s=input()
a=[0]*256
res=0
for i in s:
    a[ord(i)]+=1
for i in range(97,123):
    if a[i]==1:
        res+=1
print(res)