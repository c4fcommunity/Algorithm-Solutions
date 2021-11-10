var a:array[1..3] of int64;
    i,j:byte;
    tam:int64;
begin
  for i:=1 to 3 do readln(a[i]);
  for i:=1 to 2 do
    for j:=i+1 to 3 do
      if a[i]<a[j] then
        begin
           tam:=a[i];
           a[i]:=a[j];
           a[j]:=tam;
        end;
  for i:=1 to 3 do write(a[i],' ');
end.