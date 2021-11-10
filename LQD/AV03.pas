var sl,so,i,n:longint;
    s:int64;
begin
   readln(n);
   s:=0;
   sl:=0;
  for i:=1 to n do 
    begin
       read(so);
      if so>0 then
        begin
           inc(sl);
           inc(s,so);
        end;
    end;
   write(sl,' ',s);
end.