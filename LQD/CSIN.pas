var st:string[17];
    i,max:byte;
begin
   readln(st);
   max:=48;
  for i:=1 to length(st) do
    if ord(st[i])>max then max:=ord(st[i]);
   write(max-48);
end.