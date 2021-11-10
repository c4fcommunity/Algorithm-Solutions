var s:int64;
    i,n,so:longint;
begin
   read(n);
  for i:=1 to n do 
    begin
       read(so);
       inc(s,so);
    end;
   write(s);
end.