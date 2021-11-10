var n,a,b:int64;
begin
   readln(n);
   read(a,b);
   a:=a shl 1;
  if a<b then
    begin
      if odd(n) then write(n shr 1*a+a shr 1)
       else write(n shr 1*a);
    end
   else
     begin
       if odd(n) then write(n shr 1*b+a shr 1)
        else write(n shr 1*b);
     end;
end.    