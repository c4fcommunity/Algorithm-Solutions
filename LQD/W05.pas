var res,i,so:byte;
    s:string[16];
begin
   readln(s);
   res:=0;
  for i:=1 to length(s) do
    begin
       val(s[i],so);
       inc(res,so);
    end;
   writeln(length(s));
   write(res);
end.