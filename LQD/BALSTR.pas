var n,i:byte;
    st:ansistring;
function kt(s:ansistring):boolean;
     var dem:array['a'..'z'] of longint;
         len,i:longint;
begin
   len:=length(s);
   fillchar(dem,sizeof(dem),0);
  for i:=1 to len shr 1 do inc(dem[s[i]]);
  for i:=len shr 1 to len do 
    if dem[s[i]]=0 then exit(false);
end;
begin
   readln(n);
  for i:=1 to n do 
    begin
       readln(st);
      if odd(length(st)) then writeln('NO')
       else
         if kt(st) then writeln('YES')
          else writeln('NO');
    end;
end.