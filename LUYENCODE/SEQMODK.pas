uses math;
var a:array[0..1000] of int64;
    res,n,k,i,j:integer;
begin
   readln(n,k);
  for i:=1 to n do
    begin
       read(a[i]);
       a[i]:=a[i]+a[i-1];
    end;
    res:=0;
  for i:=1 to n do
    for j:=n downto i do
      if (a[j]-a[i-1]) mod k=0 then res:=max(res,j-i+1)
       else
         if n-i<res then break;
   write(res);
end.