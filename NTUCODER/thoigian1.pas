var n,m,h:longint;
begin
   readln(n);

   h:=n div 3600;
   n:=n mod 3600;

   m:=n div 60;
   n:=n mod 60;

  if h=0 then write(0,0,':')
   else
     if h<10 then write(0,h,':')
      else write(h,':');
  if m=0 then write(0,0,':')
   else
     if m<10 then write(0,m,':')
      else write(m,':');
  if n=0 then write(0,0)
   else
     if n<10 then write(0,n)
      else write(n);
end.