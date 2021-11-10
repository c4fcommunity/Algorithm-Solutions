var i,n,dem:longint;
    res:int64;
begin
   readln(n);
   res:=0;
   dem:=0;
  for i:=1 to trunc(sqrt(n)) do
    if n mod i=0 then 
      begin
         inc(dem,2);
         inc(res,i+n div i);
      end;
  if trunc(sqrt(n))=sqrt(n) then
    begin
       dec(dem);
       dec(res,trunc(sqrt(n)));
    end;
  write(dem,' ',res);
end.