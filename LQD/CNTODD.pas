var res,i:byte;
    s:string;
begin
   readln(s);
   res:=0;
  for i:=1 to length(s) do
    if odd(ord(s[i])) then inc(res);
   write(res);
end.