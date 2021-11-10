const maxn=trunc(1e4);
var a,b:array[1..maxn] of integer;
    n,m,i,j:longint;
procedure sort(l,r:longint);
      var i,j,x,tam:longint;
begin
   x:=a[(l+r) shr 1];
   i:=l;
   j:=r;
  while i<=j do
    begin
      while a[i]>x do inc(i);
      while x>a[j] do dec(j);
      if i<=j then
        begin
           tam:=a[i];
           a[i]:=a[j];
           a[j]:=tam;
           tam:=b[i];
           b[i]:=b[j];
           b[j]:=tam;
           inc(i);
           dec(j);
        end;
    end;
  if i<r then sort(i,r);
  if l<j then sort(l,j);
end;
procedure check(l,r:longint);
      var tam,i,j,x:longint;
begin
   x:=b[(l+r) shr 1];
   i:=l;
   j:=r;
  while i<=j do
    begin
      while b[i]>x do inc(i);
      while x>b[j] do dec(j);
      if i<=j then
        begin
           tam:=a[i];
           a[i]:=a[j];
           a[j]:=tam;
           tam:=b[i];
           b[i]:=b[j];
           b[j]:=tam;
           inc(i);
           dec(j);
        end;
    end;
  if i<r then check(i,r);
  if l<j then check(l,j);
end;
procedure update;
begin
   i:=1;
  while i<n do
    begin
       j:=i;
      while a[j+1]=a[i] do inc(j);
      if i<>j then check(i,j);
       i:=j+1;
    end;
end;
procedure init;
begin
   readln(n,m);
  for i:=1 to n do read(a[i],b[i]);
end;
procedure main;
begin
   write(a[m],' ',b[m]);
end;
begin
   init;
   sort(1,n);
   update;
   main;
end.