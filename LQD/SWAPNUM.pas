var dem:array['0'..'9'] of longint;
    ch:char;
    i,t,so:longint;
    s:ansistring;
begin
   readln(s);
   t:=0;
  for i:=1 to length(s) do
    begin
       val(s[i],so);
       inc(dem[s[i]]);
       inc(t,so);
    end;
  if (dem['0']>0) and (t mod 3=0) then
    begin
      for ch:='9' downto '0' do
        for i:=1 to dem[ch] do write(ch);
    end
   else write(-1);
end.