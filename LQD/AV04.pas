var n,i,dem:word;
    so:longint;
    tong:int64;
begin
   readln(n);
  for i:=1 to n do
    begin
       read(so);
      if so<0 then 
        begin
           inc(tong,so);
           inc(dem);
        end;
    end;
  if dem=0 then write('-1')
   else write(tong/dem:0:2);
end.