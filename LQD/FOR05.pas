var n,i:longint;
    res:int64;
begin
   read(n);
   res:=0;
  for i:=1 to trunc(sqrt(n)) do
    if n mod i=0 then inc(res,i+(n div i));
  if trunc(sqrt(n))=sqrt(n) then dec(res,trunc(sqrt(n)));
  if res mod n=0 then write('YES')
   else write('NO');
end.