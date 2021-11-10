var dem,i:byte;
    s:string[100];
begin
   readln(s);
   dem:=0;
  for i:=1 to length(s) do
    if s[i]=' ' then inc(dem);
   write(dem);
end.