var x,y:longint;
    kq1,kq2,res:real;
    delta,b,c:int64;
begin
   read(x,y);
   b:=-1*(x*2+y*2);
   c:=y*y-x*x;
   delta:=b*b-4*c;
  if delta>0 then res:=(-b-sqrt(delta))/2;
   kq1:=res;
   kq2:=y-res;
  if kq1>kq2 then write(kq2:0:9,' ',kq1:0:9,' ',sqrt(sqr(kq1)+sqr(kq2)):0:9)
   else write(kq1:0:9,' ',kq2:0:9,' ',sqrt(sqr(kq1)+sqr(kq2)):0:9);
end.

=> a^2-(x*2+y*2)+(y^2-x^2)=0


a^2-(x*2+y*2)b+(y^2-x^2)c=0
x1=(-b+căn(delta))/2
x2=(-b-căn(delta))/2
a=x2 hoặc b=x2



c-a=x
a+b=y
a^2+b^2=c^2

a=c-x
b=y-a
x=x+a
(c-x)^2+(y-a)^2=(x+a)^2
=> c^2+x^2





2a+b-c=y-x
c+b=x+y

a+b+c=y+y+x

a*a+b*b=c*c

c-b=x
a+b=y
c+a=x+y