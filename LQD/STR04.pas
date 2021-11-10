var s:string[100];
begin
   readln(s);
  while pos('  ',s)<>0 do delete(s,pos('  ',s),1);
  while s[1]=' ' do delete(s,1,1);
  while s[length(s)]=' ' do delete(s,length(s),1);
  write(s);
end.