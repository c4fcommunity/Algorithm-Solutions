n=int(input())
a=list(map(int,input().split()))
am=0
duong=0
for i in a:
    if i!=0:
        if i>0:
            duong+=1
        else:
            am+=1
print(am,duong)