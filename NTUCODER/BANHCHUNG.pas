const maxn=trunc(5e3);
var f,id:array[0..maxn*maxn] of longint;
    a:array[1..maxn*10] of longint;
    n,m,i,j,sl,sln:longint;
function max(a,b:longint):longint;
begin
  if a>b then exit(a)
   else exit(b);
end;
procedure sort(l,r:longint);
      var i,j,tam,x:longint;
begin
   x:=a[(l+r) shr 1];
   i:=l;
   j:=r;
  Repeat
    while a[i]<x do inc(i);
    while x<a[j] do dec(j);
    if i<=j then
      begin
         tam:=a[i];
         a[i]:=a[j];
         a[j]:=tam;
         inc(i);
         dec(j);
      end;
  until i>j;
  if l<j then sort(l,j);
  if i<r then sort(i,r);
end;
begin
   readln(m,n);
  for i:=1 to n do read(a[i]);
   sort(1,n);
   f[0]:=1;
   id[1]:=0;
   sl:=1;
  for i:=n downto 1 do
    if a[i]>m then dec(n);
  if a[n]=m then
    begin
       write(m);
       exit;
    end;
  for i:=1 to n do
    begin
       sln:=sl;
      for j:=1 to sl do
        if (f[id[j]+a[i]]=0) and (id[j]+a[i]<=m) then
          begin
             f[id[j]+a[i]]:=1;
             inc(sln);
             id[sln]:=a[i]+id[j];
          end;
        sl:=sln;
    end;
  for i:=m downto 0 do
    if f[i]=1 then
      begin
         write(i);
         exit;
      end;
end.