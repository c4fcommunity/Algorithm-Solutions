n=int(input())
a,b=map(int,input().split())
if n%a==0 and n%b==0:
    print('Co, tat ca!')
elif n%a==0:
    print('Chi chia het cho '+str(a)+',')
elif n%b==0:
    print('Chi chia het cho '+str(b)+'.')
else:
    print('Khong chia het cho so nao ca.')