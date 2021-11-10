const maxn=350;
var a:array[1..10] of char;
    f:array[1..maxn] of int64;
    t:byte;
    n,i,j,k:longint;
    res:int64;
function min(a,b:int64):int64;
begin
  if a>b then exit(b)
   else exit(a);
end;
procedure check(s4,s7:byte);
      var i:byte;
          s:string[10];
begin
  if s4=s7 then
    begin
       s:='';
       inc(k);
      for i:=1 to j do s:=s+a[i];
       val(s,f[k]);
    end;
end;
procedure dq(i,s4,s7:byte);
begin
  if i=0 then check(s4,s7)
   else
    begin
       a[i]:='4';
       inc(s4);
       dq(i-1,s4,s7);
       a[i]:='7';
       dec(s4);
       inc(s7);
       dq(i-1,s4,s7);
    end;
end;
begin
  for j:=1 to 10 do
    if not odd(j) then dq(j,0,0);
   readln(t);
  for i:=1 to t do
    begin
       readln(n);
       res:=trunc(1e11);
      for j:=1 to k do
        if f[j]>n then res:=min(res,f[j]);
      writeln(res);
    end;
end.