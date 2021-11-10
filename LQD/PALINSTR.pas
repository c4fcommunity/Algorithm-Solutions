var len,i:byte;
    s:string;
begin
   readln(s);
   len:=length(s);
  for i:=1 to len shr 1 do
    if s[i]<>s[len-i+1] then
      begin
         write('NO');
         exit;
      end;
   write('YES');
end.