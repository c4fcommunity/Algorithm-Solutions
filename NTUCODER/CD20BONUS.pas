const maxn=trunc(1e3);
var a:array[0..maxn,0..maxn] of longint;
    i,j,n,m,res,s:longint;
begin
   readln(n,m);
   res:=0;
  for i:=1 to n do
    begin
      for j:=1 to n do 
        begin
           read(a[i,j]);
           a[i,j]:=a[i,j]+a[i-1,j]+a[i,j-1]-a[i-1,j-1];
        end;
    end;
  for i:=1 to n-m+1 do
    for j:=1 to n-m+1 do
      begin
         s:=a[i+m-1,j+m-1]-a[i-1,j+m-1]-a[i+m-1,j-1]+a[i-1,j-1];
        if s>res then res:=s;
      end;
   write(res);
end.