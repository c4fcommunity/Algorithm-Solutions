var dem:array['a'..'z'] of byte;
    i,res:byte;
    ch:char;
    s:string;
begin
   readln(s);
   res:=0;
  for i:=1 to length(s) do inc(dem[s[i]]);
  for ch:='a' to 'z' do
    if dem[ch]=1 then inc(res);
   write(res);
end.