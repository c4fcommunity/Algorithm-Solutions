const maxn=trunc(1e5);
var a:array[1..maxn] of longint;
    n,m,i,k:longint;
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
   readln(n,m);
  for i:=1 to n do read(a[i]);
  for i:=n downto 1 do
    begin
      if m>a[i] then break;
       k:=search(a[i]-m);
      if a[k]=a[i]-m then
        begin
           write(a[k],' ',a[i]);
           exit;
        end;
    end;
   write(-1);
end.