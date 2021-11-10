const maxn=trunc(1e5);
var f:array[1..maxn*10] of longint;
    a:array[1..maxn] of longint;
    n,i:longint;
begin
   readln(n);
  for i:=1 to n do 
    begin
       read(a[i]);
       inc(f[a[i]]);
    end;
  for i:=1 to n do writeln(a[i],' ',f[a[i]]);
end.