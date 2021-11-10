const maxn=trunc(1e5);
var a,b:array[0..maxn] of longint;
    i,n,dem,res,max,min:longint;
    kt:boolean;
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
procedure sortb(l,r:longint);
      var i,j,x,tam:longint;
begin
   x:=b[(l+r) shr 1];
   i:=l;
   j:=r;
  while i<=j do
    begin
      while b[i]<x do inc(i);
      while x<b[j] do dec(j);
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
  if i<r then sortb(i,r);
  if l<j then sortb(l,j);
end;
begin
   readln(n);
  for i:=1 to n do readln(a[i],b[i]);
   sort(1,n);
   min:=a[1];
   max:=b[1];
  //if a[1]<>a[2] then res:=b[1]-a[1];
  for i:=2 to n do
    if a[i]=a[i-1] then
      begin
        if a[i]<min then min:=a[i];
        if b[i]>max then max:=b[i];
         kt:=false;
      end
     else
       begin
          inc(res,max-min);
          min:=max;
         if min>a[i] then min:=a[i];
         if b[i]>max then max:=b[i];
          kt:=true;
       end;
  if not kt then inc(res,max-min);
   write(res);
end.