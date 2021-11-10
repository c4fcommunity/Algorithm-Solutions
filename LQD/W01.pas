var so,s:int64;
begin
   s:=0;
  while 0=0 do
    begin
       read(so);
       inc(s,so);
      if so=0 then
        begin
           write(s);
           exit;
        end;
    end;
end.