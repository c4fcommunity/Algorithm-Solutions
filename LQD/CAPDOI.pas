const maxn=trunc(1e5);
var a:array[1..maxn] of longint;
    x,sct,lo,hi,i,n:longint;
    res:int64;
procedure sort(l,r:longint);
      var i,j,x,tam:longint;
begin
   x:=a[(l+r) shr 1];
   i:=l;
   j:=r;
  while i<=j do
    begin
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
    end;
  if i<r then sort(i,r);
  if l<j then sort(l,j);
end;
function search_phai(x:longint):longint;
     var lo,hi,mid,res:longint;
begin
   lo:=1;
   hi:=n;
   res:=0;
  while lo<=hi do
    begin
       mid:=(lo+hi) shr 1;
      if a[mid]<=x then
        begin
           lo:=mid+1;
          if a[mid]=x then res:=mid;
        end
       else hi:=mid-1
    end;
   exit(res);
end;
function search_trai(x:longint):longint;
     var lo,hi,mid,res:longint;
begin
   lo:=1;
   hi:=n;
   res:=0;
  while lo<=hi do
    begin
       mid:=(lo+hi) shr 1;
      if a[mid]>=x then
        begin
           hi:=mid-1;
          if a[mid]=x then res:=mid;
        end
       else lo:=mid+1
    end;
   exit(res);
end;
procedure init;
      var mid,cs,dem:longint;
begin
   readln(n,x);
   dem:=0;
   if not odd(x) then
     begin
        cs:=x shr 1;
       for i:=1 to n do
         begin
            read(a[i]);
           if a[i]=cs then inc(dem);
         end;
     end
    else
      for i:=1 to n do read(a[i]);
   res:=dem*(dem-1);
end;
procedure main;
begin
  for i:=1 to n do
    begin
      //if a[i]*2=x then break;
       sct:=x-a[i];
       lo:=search_trai(sct);
       hi:=search_phai(sct);
      if (lo>0) and (a[i] shl 1<>x) then inc(res,hi-lo+1);
    end;
   write(res shr 1);
end;
begin
   init;
   sort(1,n);
   main;
end.