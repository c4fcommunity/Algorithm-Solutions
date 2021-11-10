const maxn=trunc(1e6);
var a:array[1..maxn] of longint;
    i,j,n,m,k,x:longint;
procedure sort(l,r:longint);
      var i,j,x,tam:longint;
begin
   x:=a[(l+r) shr 1];
   i:=l;
   j:=r;
  while i<=j do
    begin
      while a[i]<x do inc(i);
      while x<a[j] do dec(j);
      if i<=j then
        begin
           tam:=a[i];
           a[i]:=a[j];
           a[j]:=tam;
           inc(i);
           dec(j);
        end;
    end;
  if i<r then sort(i,r);
  if l<j then sort(l,j);
end;
begin
   read(n,m,x);
  for i:=1 to n do
    for j:=1 to m do
      begin
         inc(k);
         a[k]:=i*j;
      end;
   sort(1,k);
   write(a[x]);
end.