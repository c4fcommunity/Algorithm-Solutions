const maxn=48;
var a,b:array[1..maxn] of byte;
    n,m,i:byte;
begin
   readln(n,m);
  if m+2<n then 
    begin
       write(-1);
       exit;
    end;
  for i:=1 to m do
    begin
       readln(a[i],b[i]);
    end;
end.