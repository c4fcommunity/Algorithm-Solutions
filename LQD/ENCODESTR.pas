var dem,i:byte;
    s:string[101];
begin
   readln(s);
   dem:=0;
   s:=s+' ';
  for i:=1 to length(s) do
    if (s[i] in ['a'..'z']) or (s[i] in ['A'..'Z']) or (s[i] in ['0'..'9']) then inc(dem)
     else
       begin
         if dem<>0 then write(dem,' ');
          dem:=0;
       end;
end.