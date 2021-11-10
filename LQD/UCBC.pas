var a,b,t,bc:int64;
begin
   read(a,b);
   bc:=a*b;
   t:=b mod a;
  while t<>0 do
    begin
       t:=a mod b;
       a:=b;
       b:=t;
    end;
  write(a,' ',bc div a);
end.