const maxn=trunc(1e6);
var a,f:array[0..maxn] of longint;
    dem:int64;
    n,k,i,j:longint;
begin
   readln(n,k);
  for i:=1 to n do 
    begin
       read(a[i]);
      if a[i]=a[i-1] then f[i]:=f[i-1]+1
       else f[i]:=1;
    end;
  for i:=1 to n do
    begin
       j:=n;
      while (a[i]+a[j]>=k) and (i<j) do
        begin
          if a[i]+a[j]=k then
            begin
              if j-f[j]>=i then inc(dem,f[j])
               else inc(dem,f[j]-f[i]);
            end;
           dec(j,f[j]);
        end;
    end;
   write(dem);
end.