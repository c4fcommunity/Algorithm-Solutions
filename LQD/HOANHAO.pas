var s:ansistring;
    i:longint;
begin
   readln(s);
  for i:=2 to length(s) do
    if s[i]=s[i-1] then
      begin
         write('NO');
         exit;
      end;
   write('YES');
end.