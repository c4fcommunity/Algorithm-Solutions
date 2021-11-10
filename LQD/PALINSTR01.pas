var s:ansistring;
function dx(x:ansistring):string;
     var len,dem,i:integer;
begin
   len:=length(s);
   dem:=0;
  for i:=1 to len shr 1 do
    if s[i]<>s[len-i+1] then inc(dem);
  if dem>2 then exit('NO')
   else exit('YES');
end;
begin
  while not eof do
    begin
       readln(s);
       writeln(dx(s));
    end;
end.