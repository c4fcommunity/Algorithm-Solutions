var res:int64;
    i,n,k,maxgt,so:longint;
function max(a,b:longint):longint;
begin
  if a>b then exit(a)
   else exit(b);
end;
begin
   readln(n,k);
   maxgt:=0;
  for i:=1 to n do 
    begin
       read(so);
       maxgt:=max(maxgt,so);
       inc(res,so);
    end;
  if k>=maxgt then dec(res,maxgt)
   else dec(res,k);
  write(res+1);
end.