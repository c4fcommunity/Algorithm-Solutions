var res1,res2,pi:real;
    n:longint;
begin
   read(n);
   pi:=3.14;
   res1:=n shl 1*pi;
   res2:=pi*n*n;
   writeln(res1:0:1);
   write(res2:0:1);
end.