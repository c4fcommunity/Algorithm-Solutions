var a,b,c:int64;
begin
   read(a,b,c);
  if (a+b>c) and (a+c>b) and (b+c>a) and (a<>b) and (a<>c) and (b<>c) then write('YES')
   else write('NO');
end.