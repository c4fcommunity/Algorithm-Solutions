var dem:array['a'..'z'] of longint;
    s:ansistring;
    i,res:longint;
    ch:char;
begin
   readln(s);
   res:=0;
  for i:=1 to length(s) do inc(dem[s[i]]);
  for ch:='a' to 'z' do
    if odd(dem[ch]) then inc(res);
   write(res-1);
end.