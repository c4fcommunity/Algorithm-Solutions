s=input()
i=0
res=''
while i<len(s):
    if s[i]=='1':
        res=res+chr(int(s[i]+s[i+1]+s[i+2]))
        i+=3
    else:
        res=res+chr(int(s[i]+s[i+1]))
        i+=2
print(res)  