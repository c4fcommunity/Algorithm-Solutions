var s:string;
    st:string[3];
    res:string[130];
    so,i,j:byte;
begin
   readln(s);
   i:=0;
   res:='';
  while i<length(s) do
    begin
       inc(i);
      if s[i]='1' then
        begin
           st:='1';
          for j:=i+1 to i+2 do st:=st+s[j];
           i:=j;
           val(st,so);
           res:=res+chr(so);
        end
       else
         begin
            st:='9';
            inc(i);
            st:=st+s[i];
            val(st,so);
            res:=res+chr(so);
         end;
    end;
   write(res);
end.