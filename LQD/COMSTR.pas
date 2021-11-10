var dem:longint;
    ch1,ch2:char;
begin
   read(ch2);
   dem:=1;
  while not eof do
    begin
       read(ch1);
      if ch1=ch2 then inc(dem)
       else
         begin
           if dem<>1 then write(dem,ch2)
            else write(ch2);
            dem:=1;
         end;
       ch2:=ch1;
    end;
end.