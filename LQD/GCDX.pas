var n,p,i,dem:longint;
function gcd(a,b:longint):longint;
     var t:longint;
begin
   t:=b mod a;
  while t>0 do
    begin
       t:=a mod b;
       a:=b;
       b:=t;
    end;
  exit(a);
end;
begin
   read(n,p);
  for i:=1 to (n div p) do
    if gcd(i*p,n)=p then inc(dem);
write(dem);
end.