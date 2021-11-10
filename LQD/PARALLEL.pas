var a:array[1..12] of longint;
    i:byte;
    kt:boolean;
procedure sort(l,r:byte);
      var x,tam:longint;
          i,j:byte;
begin
   x:=a[(l+r) shr 1];
   i:=l;
   j:=r;
  while i<=j do
    begin
      while a[i]>x do inc(i);
      while x>a[j] do dec(j);
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
  while not eof do
    begin
      for i:=1 to 12 do read(a[i]);
      if a[1]=0 then exit;
       sort(1,12);
       kt:=true;
      for i:=2 to 4 do
        if a[i]<>a[i-1] then kt:=false;
      for i:=6 to 8 do
        if a[i]<>a[i-1] then kt:=false;
      for i:=10 to 12 do
        if a[i]<>a[i-1] then kt:=false;
      if kt then writeln('yes')
       else writeln('no');
    end;
end.