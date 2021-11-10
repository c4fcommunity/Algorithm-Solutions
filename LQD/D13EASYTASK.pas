const maxn=trunc(1e6);
var a:array[0..maxn] of int64;
    fmin:array[0..maxn] of int64;
    f:array[1..maxn] of boolean;
    n,i:longint;
    res:int64;
function max(a,b:int64):int64;
begin
  if a>b then exit(a)
   else exit(b);
end;
function min(a,b:int64):int64;
begin
  if a<b then exit(a)
   else exit(b);
end;
procedure init;
	  var i,j:longint;
begin
   f[1]:=true;
   a[0]:=0;
   fmin[1]:=high(int64);
   res:=low(int64);
  for i:=2 to n do
    if f[i]=false then
      for j:=2 to (n div i) do f[i*j]:=true;
end;
begin
   readln(n);
   init;
  for i:=1 to n do
    begin
       read(a[i]);
      inc(a[i],a[i-1]);
    end;
  for i:=2 to n do
    if f[i]=false then fmin[i]:=min(fmin[i-1],a[i-1])
     else fmin[i]:=fmin[i-1];
  for i:=2 to n do
    if f[i]=false then res:=max(res,a[i]-fmin[i]);
   writeln(res)
end.