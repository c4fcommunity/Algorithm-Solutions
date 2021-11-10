var res,s:string[100];
    i:byte;
begin
   readln(s);
   res:='';
  for i:=1 to length(s) do
   begin
      if s[i] in ['a'..'z'] then res:=res+chr(ord(s[i])-32);
      if s[i] in ['A'..'Z'] then res:=res+chr(ord(s[i])+32);
      if (s[i] in ['A'..'Z']) or (s[i] in ['a'..'z']) then res:=res+''
       else res:=res+s[i];
   end;
   write(res);
end.