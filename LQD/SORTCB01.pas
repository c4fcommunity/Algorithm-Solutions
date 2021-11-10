const maxn=trunc(1e4);
var a:array[1..maxn] of longint;
    i,n:longint;
procedure sort(l,r:longint);
      var tam,x,i,j:longint;
begin
   x:=a[(l+r) shr 1];
   i:=l;
   j:=r;
  while j>=i do
    begin
      while a[i]>x do inc(i);
      while x>a[j]do dec(j);
      if i<=j then
        begin
           tam:=a[i];
           a[i]:=a[j];
           a[j]:=tam;
           inc(i);
           dec(j)
        end;
    end;
  if i<r then sort(i,r);
  if l<j then sort(l,j);
end;
begin
   readln(n);
  for i:=1 to n do read(a[i]);
   sort(1,n);
  for i:=1 to n do write(a[i],' ');
end.