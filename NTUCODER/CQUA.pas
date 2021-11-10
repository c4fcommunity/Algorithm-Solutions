var n,i,so:byte;
    t1,t2:longint;
    kt:boolean;
begin
   readln(n);

  for i:=1 to n do
    begin
       read(so);
      if so=100 then kt:=true;
      if t1>t2 then t2:=t2+so
       else t1:=t1+so;
    end;
  if (t1=t2) or ((kt) and ((t1+100=t2-100) or (t1-100=t2+100))) then write('YES')
   else write('NO');
end.