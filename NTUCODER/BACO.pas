var f:array[1..8,1..8] of byte;
    x1,x2,t1,t2,i,j,res:byte;
procedure tuong_move;
begin
   i:=t1;
   j:=t2;
  while (i>0) and (j>0) do
    begin
        inc(f[i][j]);
        dec(i);
        dec(j);
    end;
   i:=t1;
   j:=t2;
  while (i<9) and (j<9) do
    begin
        inc(f[i][j]);
        inc(i);
        inc(j);
    end;
   i:=t1;
   j:=t2;
  while (j<9) and (i>0) do
    begin
       inc(f[i][j]);
       inc(j);
       dec(i);
    end;
   i:=t1;
   j:=t2;
  while (i<9) and (j>0) do
    begin
       inc(f[i][j]);
       inc(i);
       dec(j);
    end;
end;
procedure xe_move;
begin
  for i:=1 to 8 do
    begin
       inc(f[x1][i]);
       inc(f[i][x2]);
    end;
end;
procedure solve;
begin
  for i:=1 to 8 do
    for j:=1 to 8 do
      if f[i][j]<>0 then inc(res);
   write(res);
end;
begin
   read(x1,x2,t1,t2);
   xe_move;
   tuong_move;
   solve;
end.