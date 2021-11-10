var s,st:string;
    i,j,res,n:integer;
    kt:boolean;
    so:qword;
    a:array[1..500] of qword;
procedure check(x:qword);
      var i:integer;
begin
   kt:=true;
  for i:=1 to n do
    if a[i]=x then kt:=false;
end;
begin
   readln(s);
   val(s,a[1]);
   n:=1;
  for i:=1 to length(s)-1 do
    begin
      for j:=0 to length(s)-i do
        begin
           st:=copy(s,1,j)+copy(s,j+i+1,length(s));
           val(st,so);
           writeln(st);
           check(so);
          if kt then
            begin
               inc(n);
               a[n]:=so;
            end;
        end;
    end;
  for i:=1 to n do
    if a[i] mod 3=0 then inc(res);
   write(res);
end.