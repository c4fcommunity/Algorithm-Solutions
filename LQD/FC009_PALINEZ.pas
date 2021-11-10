var kt:boolean;
    s:ansistring;
    q,i,j,a,b:integer;
begin
   readln(s);
   readln(q);
  for i:=1 to q do
    begin
       readln(a,b);
       kt:=true;
      for j:=a to (a+b) shr 1 do
        if s[j]<>s[b-j+a] then
          begin
             kt:=false;
             break;
          end;
      if kt then writeln('YES')
       else writeln('NO');
    end;
end.