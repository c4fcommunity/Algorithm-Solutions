var i,n:longint;
begin
   readln(n);
  for i:=1 to n do
    if n mod i=0 then write(i,' ');
end.