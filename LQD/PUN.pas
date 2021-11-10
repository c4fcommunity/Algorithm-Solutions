var n,i,j,res:integer;
    s,st,sthua:ansistring;
begin
   readln(n);
   readln(s);
   res:=0;
  for i:=1 to (n div 2) do
    for j:=1 to n-i do
      begin
         st:=copy(s,j,i);
         sthua:=s;
         delete(sthua,1,j+i-1);
        if (pos(st,sthua)<>0) then res:=i;
      end;
   write(res);
end.