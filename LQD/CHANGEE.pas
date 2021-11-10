var s,res:string[100];
    n,i,j:byte;
begin
   readln(n);
  for i:=1 to n do
    begin
       readln(s);
       res:='';
      for j:=1 to length(s) do
        if (s[j]='u') or (s[j]='e') or (s[j]='o') or (s[j]='a') or (s[j]='i') then res:=res+upcase(s[j])
         else
           if (s[j]<>'U') and (s[j]<>'E') and (s[j]<>'O') and (s[j]<>'A') and (s[j]<>'I') then res:=res+lowercase(s[j])
            else res:=res+s[j];
       writeln(res);
    end;
end.