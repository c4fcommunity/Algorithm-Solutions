const maxn=trunc(1e5);
var s,i,j,n,m:longint;
    f:array[0..100,0..maxn] of int64;
    w:array[1..100] of longint;
    v:array[1..100] of integer;
function min(a,b:int64):int64;
begin
  if a<b then exit(a)
   else exit(b);
end;
begin
   readln(n,m);
   s:=0;
  for i:=1 to n do
    begin
       readln(w[i],v[i]);
       inc(s,v[i]);
    end;
  for i:=1 to s do f[0,i]:=trunc(1e11);
  for i:=1 to n do
    for j:=1 to s do
      if j>=v[i] then f[i,j]:=min(f[i-1,j],f[i-1,j-v[i]]+w[i])
       else f[i,j]:=f[i-1,j];
  for j:=s downto 1 do
    if f[n,j]<=m then
      begin
         write(j);
         break;
      end;
end.