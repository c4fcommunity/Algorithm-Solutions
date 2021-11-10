n=int(input())
a=1
b=1
c=1
print(str(a)+' '+str(b)+' ',end='')
for i in range(3,n+1):
	a=b
	b=c
	c=a+b
	print(str(c)+' ',end='')