var a,b:int64;
begin
   read(a,b);
  if (a=b) or (not odd(a+b)) then write('YES')
   else write('NO');
end.