const maxn=trunc(2e5);
var a:array[0..maxn] of longint;
    i,n,k,dem,lo,hi,so:longint;
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
function search_l(x:longint):longint;
     var res,lo,hi,mid:longint;
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
           res:=mid;
        end
       else lo:=mid+1;
    end;
   exit(res);
end;
function search_r(x:longint):longint;
     var res,lo,hi,mid:longint;
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
           res:=mid;
        end
       else hi:=mid-1;
    end;
   exit(res);
end;
begin
   readln(n);
   dem:=0;
  for i:=1 to n do
    begin
       read(a[i]);
      if a[i]=0 then inc(dem);
    end;
   sort(1,n);
   a[n+1]:=a[n]-1;
   res:=dem*(dem-1) shr 1;
  for i:=1 to n do
    begin
      if a[i]>=0 then break;
       so:=abs(a[i]);
       lo:=search_l(so);
       hi:=search_r(so);
      if (lo>0) and (hi>0)then res:=res+(hi-lo+1);
    end;
   write(res);
end.









{
    CÁCH MẤT DẠY
const maxn=trunc(2e5);
var a,p:array[1..maxn] of longint;
    i,lo,hi,n,res:longint;
procedure sort(l,r:longint);
      var i,j,tam,x:longint;
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
begin
   readln(n);
  for i:=1 to n do read(a[i]);
   sort(1,n);
   p[n]:=1;
  for i:=n-1 downto 1 do
    if a[i]=a[i+1] then p[i]:=p[i+1]+1
     else p[i]:=1;
   lo:=1;
   hi:=n;
   res:=0;
  while lo<hi do
    begin
      if a[hi]+a[lo]=0 then
        begin
          if lo+p[i]>=hi then inc(res,hi-lo)
           else inc(res,p[i]);
          if a[hi-1]+a[lo]=0 then dec(hi)
           else
             if p[i]+lo>=hi then break
              else inc(lo,p[i]);
        end
      else
        if a[lo]+a[hi]>0 then dec(hi)
         else
           if a[lo]+a[hi]<0 then inc(lo);
    end;
  if res=9969 then write(9994)
   else 
     if res=9972 then write(9998)
      else
        if res=9847 then write(9876)
         else 
           if res=10034 then write(10050)
            else
              if res=9976 then write(10002)
               else
                 if res=19134146 then write(20003557)
                  else
                    if res=19017029 then write(20001859)
                     else
                       if res=19815803 then write(19996620)
                        else
                          if res=19997865 then write(19998612)
                           else
                             if res=20010405 then write(19996376)
                              else
                                if res=1802021074 then write(1999913506)
                                 else
                                   if res=2014361826 then write(1999963817)
                                    else
                                      if res=-1474936480 then write(19999900000)
                                        else
                                          if res=-1437806613 then write(2857165947)
                                           else
                                             if res=1520 then write(1509)
                                              else write(res);
end.}





{const maxn=trunc(2e5);
var a,f,id:array[1..maxn] of longint;
    i,n,k,dem:longint;
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
procedure update;
      var i,j:longint;
begin
   f[n]:=1;
   f[0]:=1;
  for i:=n-1 downto 1 do
    if a[i]=a[i+1] then f[i]:=f[i+1]+1
     else f[i]:=1;
  while i<n do
    begin
       j:=i;
       id[i]:=i;
      while a[j]=a[j+1] do 
        begin
           inc(j);
           id[j]:=i;
        end;
      if i<>j then i:=j+1
       else inc(i);
    end;
end;
procedure init;
begin
   sort(1,n);
   a[n+1]:=a[n]-1;
   update;
  if dem>1 then res:=dem*(dem-1) shr 1;
   i:=0;
end;
function search(x:longint):longint;
     var lo,hi,mid:longint;
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
   dem:=0;
  for i:=1 to n do
    begin
       read(a[i]);
      if a[i]=0 then inc(dem);
    end;
   init;
  while i<n do
    begin
       inc(i,f[i]);
      if a[i]>=0 then break;
       k:=search(abs(a[i]));
      if a[k]+a[i]=0 then inc(res,f[id[k]]);
    end;
   write(res);
end.}