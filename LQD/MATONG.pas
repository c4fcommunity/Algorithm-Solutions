uses math;
var i,n,so:longint;
    s:qword;
function dem_uoc(x:longint):longint;
     var i,dem:longint;
begin
   dem:=0;
  for i:=1 to trunc(sqrt(x)) do
    if x mod i=0 then
      begin
         inc(dem);
        if x div i<>i then inc(dem);
      end;
   exit(dem);
end;
begin
   readln(n);
   //write(exp(1/3*ln(27)):0:2);
  for i:=1 to n do
    begin
       read(so);
       inc(s,so*dem_uoc(so));
    end;
write(s);
end.

{var
procedure init;
begin
  for i:=1 to 
end
begin
   readln(n);
  for i:=1 to n do
end.}