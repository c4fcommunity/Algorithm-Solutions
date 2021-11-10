const maxn=trunc(1e5);
var a:array[1..maxn] of word;
    f:array[1..maxn] of longint;
    i,j,n:longint;
function max(a,b:longint):longint;
begin
  if a>b then exit(a)
   else exit(b);
end;
function min(a,b:longint):longint;
begin
  if a>b then exit(b)
   else exit(a);
end;
begin
   readln(n);
  for i:=1 to n do read(a[i]);
   f[1]:=0;
  for i:=2 to n do
    begin
       f[i]:=trunc(1e9);
      for j:=max(1,i-2) to i-1 do f[i]:=min(f[i],f[j]+abs(a[i]-a[j]));
    end;
   write(f[n]);
end.