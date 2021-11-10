var i:longint;
    ch:char;
begin
  while not eoln do
    begin
       read(ch);
      if ch='1' then 
        begin
           write(i);
           exit;
        end;
       inc(i);
    end;
end.