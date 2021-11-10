var t,i:byte;
    n,dem,j:longint;
begin
   readln(t);
  for i:=1 to t do
    begin
       readln(n);
       dem:=0;
      for j:=1 to trunc(sqrt(n)) do
        if n mod j=0 then
          begin
             inc(dem);
            if n div j<>j then inc(dem);
          end;
      if odd(dem) then writeln(1)
       else writeln(0);
    end;
end.