const maxn=trunc(1e5);
var f:array[0..maxn,1..3] of longint;
    a,b,c:word;
    n,i:longint;
function max(a,b:longint):longint;
begin
  if a>b then exit(a)
   else exit(b);
end;
begin
   readln(n);
  for i:=1 to n do
    begin
       readln(a,b,c);
       f[i,1]:=max(f[i-1,2],f[i-1,3])+a;
       f[i,2]:=max(f[i-1,1],f[i-1,3])+b;
       f[i,3]:=max(f[i-1,1],f[i-1,2])+c;
    end;
   write(max(f[n,1],max(f[n,2],f[n,3])));
end.