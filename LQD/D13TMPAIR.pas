var n,i,res,d:longint;
begin
   read(n);
   d:=1;
  for i:=2 to trunc(sqrt(n)) do
    if n mod i=0 then
      begin
         inc(d);
        if n div i <> i then inc(d);
      end;
  if n mod 2=0 then write(d*2-1) else write(d+1*2);
end.