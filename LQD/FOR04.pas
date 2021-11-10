var res,n,i:longint;
begin
   read(n);
   res:=0;
  for i:=1 to trunc(sqrt(n)) do
    if n mod i=0 then
      if n div i<>i then inc(res,2)
       else inc(res);
  write(res);
end.