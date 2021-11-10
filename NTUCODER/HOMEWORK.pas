const maxn=trunc(1e5);
var n,i,so:longint;
    res:int64;
    a:array[1..maxn] of longint;
function gcd(a,b:int64):longint;
     var t:longint;
begin
   t:=b mod a;
  while t<>0 do
    begin
       t:=a mod b;
       a:=b;
       b:=t;
    end;
   exit(a);
end;
begin
   readln(n);
  for i:=1 to n do read(a[i]);
   res:=a[1];
  for i:=2 to n do res:=gcd(res,a[i]);
   write(res*n);
end.