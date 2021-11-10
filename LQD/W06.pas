var n,m,i,min:longint;
begin
   read(n,m);
  if n<m then min:=n
   else min:=m;
  for i:=1 to min do
    if (n mod i=0) and (m mod i=0) then write(i,' ');
end.