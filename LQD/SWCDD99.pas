var i:byte;
    n:longint;
    s:string[1];
    res:ansistring;
begin
   read(n);
  for i:=9 downto 1 do
    while n-i>=0 do
      begin
         dec(n,i);
         str(i,s);
         res:=s+res;
      end;
   write(res);
end.