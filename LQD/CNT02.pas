const maxn=trunc(1e5);
var a:array[1..maxn] of longint;
    dem:array[1..maxn*10] of longint;
    i,n:longint;
procedure sort(l,r:longint);
      var i,j,tam,x:longint;
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
  if l<j then sort(l,j);
  if i<r then sort(i,r);
end;
begin
   readln(n);
  for i:=1 to n do
    begin
       read(a[i]);
       inc(dem[a[i]]);
    end;
   sort(1,n);
  for i:=1 to maxn*10 do 
    if dem[i]<>0 then writeln(i,' ',dem[i]);
end.