const max=20;
var res1,res2:array[1..max*2] of byte;
    a:array[1..max,1..max] of shortint;
    n,m,i,j:byte;
    kt:boolean;
procedure inra(k:byte);
      var i:byte;
begin
  for i:=1 to k do writeln(res1[i],' ',res2[i]);
   kt:=true;
end;
procedure loang(i,j,k:byte; duyet:boolean);
begin
  if kt then exit;
   res1[k]:=i;
   res2[k]:=j;
  if (duyet=true) and (i=n) and (j=m) and (not kt) then inra(k);
  if (a[i+1,j]<>-1) and (i+1<=n) then
    if (a[i+1,j]<>a[i,j]) and (a[i+1,j]<>0) and (a[i,j]<>0) then loang(i+1,j,k+1,true)
     else loang(i+1,j,k+1,duyet);
  if (a[i,j+1]<>-1) and (j+1<=m) then
    if (a[i,j+1]<>a[i,j]) and (a[i,j]<>0) and (a[i,j+1]<>0) then loang(i,j+1,k+1,true)
     else loang(i,j+1,k+1,duyet);
end;
begin
   readln(n,m);
   kt:=false;
  for i:=1 to n do
    for j:=1 to m do read(a[i,j]);
   res1[1]:=1;
   res2[1]:=1;
   loang(1,1,1,false);
   if not kt then write(-1);
end.