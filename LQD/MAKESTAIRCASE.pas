const no='impossible';
      maxn=trunc(2e5);
var a,f:array[1..maxn] of longint;
    i,n:longint;
    kt:boolean;
function min(a,b:longint):longint;
begin
  if a<b then exit(a)
   else exit(b);
end;
begin
   readln(n);
   kt:=true;
  for i:=1 to n do 
    begin
       read(a[i]);
       f[i]:=a[1]+i-1;
      if f[i]<a[i] then kt:=false;
    end;
   f[n]:=a[n];
  if (f[n]>f[n-1]+1) or (kt=false) then write(no)
   else
     for i:=1 to n do write(min(f[i],f[n]),' ');
end.