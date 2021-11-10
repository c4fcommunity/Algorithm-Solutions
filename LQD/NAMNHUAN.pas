var t,i:byte;
    so:longint;
begin
   readln(t);
  for i:=1 to t do
    begin
       readln(so);
      if (so mod 400=0) or ((so mod 4=0) and (so mod 100<>0)) then writeln('YES')
       else writeln('NO');
    end;
end.