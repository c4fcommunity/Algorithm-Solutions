var a:array[1..100] of shortint;
    i,s,n:integer;
    t:longint;
begin
   readln(n);
   t:=0;
   s:=0;
  for i:=1 to n do 
    begin
       read(a[i]);
       inc(s,a[i]);
    end;
  if (s/n)>(s div n)+0.5 then s:=s div n+1
   else s:=s div n;
  for i:=1 to n do inc(t,sqr(abs(s-a[i])));
   write(t);
end.