const maxn=60002;
var a,b:array[1..maxn] of word;
    f:array[1..maxn] of longint;
    i,n:word;
function min(a,b:longint):longint;
begin
  if a<b then exit(a)
   else exit(b);
end;
begin
   read(n);
  for i:=1 to n do read(a[i]);
  for i:=1 to n-1 do read(b[i]);
   f[n]:=a[n];
  for i:=n-1 downto 1 do
    begin
       f[i]:=high(longint);
       f[i]:=min(f[i+2]+b[i],f[i+1]+a[i]);
    end;
write(f[1]);
end.