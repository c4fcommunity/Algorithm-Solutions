var n,m:int64;
function ucln(a,b:int64):int64;
     var t:int64;
begin
   t:=b mod a;
  while t<>0 do
    begin
       t:=a mod b;
       a:=b;
       b:=t;
    end;
   exit(a);
end;
begin
   read(n,m);
   write(ucln(n,m));
end.