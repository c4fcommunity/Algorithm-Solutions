const maxn=32;
var w,v:array[1..maxn] of int64;
    a,b:array[1..1 shl (maxn shr 1+1)] of int64;
    n:byte;
    m,i,j,k:longint;
    lo,hi,res,so,max:int64;
procedure sort(l,r:longint);
      var i,j,x,tam:longint;
begin
   x:=a[(l+r) shr 1];
   i:=l;
   j:=r;
  while j>=i do
    begin
      while a[i]<x do inc(i);
      while x<a[j] do dec(j);
      if j>=i then
        begin
           tam:=a[i];
           a[i]:=a[j];
           a[j]:=tam;
           inc(i);
           dec(j);
        end;
    end;
  if i<r then sort(i,r);
  if j>l then sort(l,j);
end;
procedure dq(value,weight:int64; i,k:byte);
      var j:byte;
begin
  if weight>hi then exit;
  if weight>=lo then
    begin
      if value>max then max:=value;
       inc(m);
       a[m]:=weight;
       b[m]:=value;
    end;
  for j:=i to k do dq(value+v[j], weight+w[j], j+1, k);
end;
function search(x:int64):longint;
     var ans,hi,lo,tam:longint;
begin
   lo:=1;
   hi:=n;
   ans:=0;
  while lo<=hi do
    begin
       tam:=(lo+hi) shr 1;
      if a[tam]>=x then
        begin
           ans:=tam;
           lo:=tam+1;
        end
       else hi:=tam-1;
    end;
   exit(ans);
end;
begin
   readln(n,lo,hi);
   res:=-trunc(1e18);
   m:=1;
   a[1]:=0;
   b[1]:=0;
  for i:=1 to n do 
    begin
       readln(w[i],v[i]);
       inc(m);
       a[m]:=w[i];
       b[m]:=v[i];
    end;
   dq(0,0,1,n shr 1);
   dq(0,0,n shr 1+1,n);
   sort(1,m);
  for i:=1 to m do
    if a[i]=max then
      begin
         j:=i;
        while a[j+1]=max do inc(j);
         break;
      end;
   m:=j;
  for i:=1 to m do
    begin
       if a[i]>lo then break;
       so:=hi-a[i];
       k:=search(so);
      for j:=1 to k do
        if (res<b[k]+b[i]) and (i<>k) then res:=b[k]+b[i];
    end;
   write(res);
end.