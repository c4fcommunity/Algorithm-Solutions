var res,min,so:real;
    i,n:longint;
begin
   readln(n);
   res:=0;
   min:=10;
  for i:=1 to n do
    begin
       read(so);
       res:=res+so;
      if so<min then min:=so;
    end;
   res:=res+10-min;
   write(res:0:1);
end.