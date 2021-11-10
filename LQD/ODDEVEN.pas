var s:string;
    n,i,j:byte;
    kt:boolean;
begin
   readln(n);
  for j:=1 to n do
    begin
       readln(s);
       kt:=true;
      for i:=1 to length(s) do
        if ((odd(i)) and (not odd(ord(s[i])))) or ((not odd(i)) and (odd(ord(s[i])))) then
          begin
             writeln('NO');
             kt:=false;
             break;
          end;
      if kt then writeln('YES');
    end;
end.