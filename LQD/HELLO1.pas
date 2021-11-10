var s:string;
    i,j,k,n:byte;
    a:array[1..6] of char;
procedure init;
begin
   a[1]:='h';
   a[2]:='e';
   a[3]:='l';
   a[4]:='l';
   a[5]:='o';
end;
begin
   readln(n);
   init;
  for i:=1 to n do
    begin
       readln(s);
       k:=1;
      for j:=pos('h',s) to length(s) do
        begin
          if s[j]=a[k] then inc(k);
          if k=6 then break;
        end;
      if k=6 then writeln('YES')
       else writeln('NO');
    end;
end.