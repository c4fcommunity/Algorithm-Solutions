var so,am,duong,i,n:longint;
begin
   readln(n);
   am:=0;
   duong:=0;
  for i:=1 to n do
    begin
       read(so);
      if so<>0 then
        if so>0 then inc(duong)
         else inc(am);
    end;
   write(am,' ',duong);
end.