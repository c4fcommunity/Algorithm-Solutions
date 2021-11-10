var a,b:array[1..100] of byte;
    res,max,i,j,dem,n:word;
    kt:boolean;
procedure sort(l,r:byte);
      var i,j,x,tam:byte;
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
  if i<r then sort(i,r);
  if l<j then sort(l,j);
end;
procedure sorta(l,r:byte);
      var i,j,x,tam:byte;
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
           inc(i);
           dec(j);
        end;
    end;
  if i<r then sorta(i,r);
  if l<j then sorta(l,j);
end;
begin
   readln(n);
   dem:=1;
   max:=0;
  for i:=1 to n do readln(a[i],b[i]);
   sort(1,n);
  for i:=1 to n do
    if b[i]=0 then 
      begin
         sorta(i,n);
         break;
      end;
  for i:=1 to n do
    begin
       inc(dem,b[i]-1);
       inc(res,a[i]);
      if dem=0 then break;
    end;
   write(res);
end.