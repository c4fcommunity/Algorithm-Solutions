def init():
    i=0
    j=0
    while i+1<m:
        i=i+1
        while (j>0) and (s[i]!=s[j]):
            j=f[j]
        if s[i]==s[j]:
            j=j+1
        f[i]=j
def main():
    i=0
    j=0
    while i<n:
        if txt[i]==s[j]:
            i=i+1
            j=j+1
        if j==m:
            print(i-j+1,end=' ')
            j=f[j-1]
        elif (txt[i]!=s[j]) and (j<m):
            if j==0:
                i=i+1
            else:
                j=f[j]
txt=input()
s=input()
n=len(txt)
m=len(s)
f=[0]*m
init()
main()