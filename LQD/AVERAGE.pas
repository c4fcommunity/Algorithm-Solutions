var res,i,n,so:longint;
function max(a,b:longint):longint;
begin
  if a>b then exit(a)
   else exit(b);
end;
begin
   readln(n);
   read(res);
  for i:=2 to n do 
    begin
       read(so);
       res:=max(res,so);
    end;
   write(res);
end.