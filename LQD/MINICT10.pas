var s,res:string;
    i:byte;
    ch:char;
    dem:array['1'..'3'] of byte;
begin
   readln(s);
   res:='';
  for i:=1 to length(s) do
    if (s[i]='1') or (s[i]='2') or (s[i]='3') then inc(dem[s[i]]);
  for ch:='1' to '3' do
    for i:=1 to dem[ch] do res:=res+ch+'+';
   delete(res,length(res),1);
   write(res);
end.