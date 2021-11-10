const maxn=trunc(1e4);
var a:array[1..maxn] of longint;
    n,k,i:longint;
procedure quicksort(l,r:longint);
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
  if i<r then quicksort(i,r);
  if j>l then quicksort(l,j);
end;
begin
   readln(n,k);
  for i:=1 to n do read(a[i]);
   quicksort(1,n);
  write(a[k]);
end.