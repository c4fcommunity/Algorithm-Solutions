var i,n,dem:longint;
function nt(x:longint):boolean;
     var i:word;
begin
   nt:=false;
  if x=1 then exit;
  for i:=2 to trunc(sqrt(x)) do
    if x mod i=0 then exit;
   exit(true);
end;
begin
   readln(n);
  for i:=2 to (n div 2) do
    if (nt(i)) and (nt(n-i)) then inc(dem);
write(dem);
end.