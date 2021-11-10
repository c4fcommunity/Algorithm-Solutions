var i,j,k,n:byte;
begin
   read(n);
   k:=0;
  for i:=1 to n do
    begin
      for j:=i to i+k do write(j,' ');
       writeln;
       inc(k);
    end;
end.