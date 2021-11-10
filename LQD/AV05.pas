var n,i,so1,so2,so:longint;
    kt:boolean;
begin
   readln(n);
   kt:=false;
  for i:=1 to n do
    begin
       read(so);
      if (so>0) and (kt=false) then 
        begin
           so1:=i;
           kt:=true;
        end;
      if (so>0) and (kt=true) then so2:=i;
    end;
  if so1>0 then
    begin
      if so2=0 then write(so1,' ',so1)
       else write(so1,' ',so2);
    end
   else write(-1,' ',-1);
end.