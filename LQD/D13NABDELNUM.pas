const maxn=1000000;
var a,f:array[1..maxn] of longint;
    res,i,j,n,so:longint;
function max(a,b:longint):longint;
begin
  if a>b then max:=a
   else max:=b;
end;
begin
   readln(n);
  for i:=1 to n do
    begin
       read(so);
       inc(a[so]);
    end;
  for i:=1 to maxn do
    if a[i]<>0 then
      begin
         f[i]:=f[i]+a[i];
         j:=0;
        while (j+i<=maxn) do
          begin
             inc(j,i);
             f[j]:=max(f[j],f[i]);
             res:=max(res,f[j]);
          end;
      end;
    write(n-res);
end.