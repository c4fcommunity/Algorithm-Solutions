var n,i,j:byte;
begin
   read(n);
  for i:=1 to n do
    begin
      for j:=i to i+n-1 do write(j,' ');
       writeln;
    end;
end.