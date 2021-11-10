const maxn=trunc(1e5);
var a:array[0..maxn] of longint;
    n,m,i,k,so:longint;
function search(x:longint):longint;
     var lo,mid,hi:longint;
begin
   lo:=1;
   hi:=n;
  while lo<hi do
    begin
       mid:=(lo+hi) shr 1;
      if a[mid]=x then exit(mid);
      if a[mid]>x then hi:=mid-1
       else lo:=mid+1;
    end;
   exit(lo);
end;
begin
   readln(n);
  for i:=1 to n do
    begin
       read(a[i]);
       inc(a[i],a[i-1]);
    end;
   readln(m);
  for i:=1 to m do
    begin
       read(so);
       k:=search(so);
      if so>a[k] then inc(k);
      write(k,' ');
    end;
end.