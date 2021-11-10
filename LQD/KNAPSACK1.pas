const maxn=100;
      maxm=trunc(1e5);
var w,v:array[1..maxn] of longint;
    f:array[0..maxn,0..maxm] of int64;
    m,j:longint;
    n,i:byte;
function max(a,b:int64):int64;
begin
  if a>b then exit(a)
   else exit(b);
end;
begin
   readln(n,m);
  for i:=1 to n do readln(w[i],v[i]);
  if m<
    begin
      for i:=1 to n do
        for j:=1 to m do
          if j>=w[i] then f[i,j]:=max(f[i-1,j],f[i-1,j-w[i]]+v[i])
           else f[i,j]:=f[i-1,j];
       write(f[n,m]);
    end;
end.