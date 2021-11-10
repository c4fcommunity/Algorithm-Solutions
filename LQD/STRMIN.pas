var k,i,j,l:word;
    s:ansistring;
    min:char;
begin
   readln(k);readln(s);l:=1;
  for i:=1 to k do
    begin
       min:='9';
      for j:=l to length(s)-k+i do
        if s[j]<min then
          begin
             min:=s[j];
             l:=j+1;
          end;
       write(min);
    end;
end.