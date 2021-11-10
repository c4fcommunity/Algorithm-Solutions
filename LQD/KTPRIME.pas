var n:int64;
function kt(n:int64):boolean;
     var i:longint;
begin
   kt:=false;
  if n<2 then exit;
  for i:=2 to trunc(sqrt(n)) do
    if n mod i=0 then exit;
   exit(true);
end;
begin
   read(n);
  if kt(n) then write('YES')
   else write('NO');
end.