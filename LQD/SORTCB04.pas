var a:array[1..10000] of integer;
    t:longint;
    i,j,so,n,m:integer;
procedure quicksort(l,r:longint);
      var i,j,tam,x:longint;
begin
   x:=a[(l+r) div 2];
   i:=l;
   j:=r;
  Repeat
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
  until i>j;
  if l<j then quicksort(l,j);
  if i<r then quicksort(i,r);
end;
begin
   readln(n,m);
  for i:=1 to n do
    begin
       read(so);
      if so<0 then 
        begin
           inc(j);
           a[j]:=so;
        end;
    end;
   quicksort(1,j);j:=1;
  for i:=1 to m do inc(t,a[i]);t:=abs(t);
write(t);
end.