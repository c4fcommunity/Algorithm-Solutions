var dem,i,n,x,so:longint;
begin
   readln(n,x);
   dem:=0;
  for i:=1 to n do
    begin
       read(so);
      if so=x then inc(dem);
    end;
   write(dem);
end.