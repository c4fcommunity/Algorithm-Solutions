var t,n,i:longint;
begin
   readln(t);
  for i:=1 to t do
    begin
       readln(n);
      if odd(n) then writeln('-',n*(n+1) shr 1)
       else writeln(n*(n+1) shr 1)
    end;
end.