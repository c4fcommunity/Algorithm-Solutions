var dem:array['a'..'z'] of integer;
    s:ansistring;
    i:integer;
    ch:char;
begin
   readln(s);
  for i:=1 to length(s) do inc(dem[s[i]]);
  for ch:='a' to 'z' do
    if dem[ch] mod 2=1 then
      begin
         write('No');
         exit;
      end;
  write('Yes');
end.