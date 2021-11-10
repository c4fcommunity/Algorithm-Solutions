const maxn=trunc(1e5);
var a,max,id:array[1..maxn] of longint;
    t,i,j,n,so:longint;
    cs:byte;
procedure push(x:longint);
begin
   inc(i);
   a[i]:=x;
end;
procedure update(x:byte);
begin
  if x=1 then
    begin
      if so>max[j] then
        begin
           inc(j);
           max[j]:=so;
           id[j]:=i;
        end;
    end
   else
     begin
        dec(i);
       if id[j]>i then dec(j);
     end;
end;
begin
   readln(n);
   i:=0;
   j:=0;
  for t:=1 to n do
    begin
       read(cs);
      if cs=1 then
        begin
           readln(so);
           push(so);
           update(1);
        end
       else
         if cs=2 then update(2)
          else writeln(max[j]);
    end;
end.