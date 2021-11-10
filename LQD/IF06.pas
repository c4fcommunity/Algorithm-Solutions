var n:qword;
    x:real;
begin
readln(n);x:=sqrt(n);
  if x=trunc(x) then write('YES')
   else write('NO');
end.