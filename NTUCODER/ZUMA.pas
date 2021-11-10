var st,s:string;
    n,i,j,k,res:byte;
    ch:char;
procedure con(i1,j1,k1,dem:byte);
begin
  while s[i1-1]=s[k1] do 
    begin
       dec(i1);
       inc(dem);
    end;
  while s[j1+1]=s[k1] do 
    begin
       inc(j1);
       inc(dem);
    end;
  if dem>=3 then res:=j1-i1+1;
   dec(i1);
   inc(j1);
  if s[i1]=s[j1] then con(i1,j1,j1,2);
end;
begin
   readln(n);
   readln(s);
   readln(st);
   s:=s;
   ch:=st[length(st)];
   delete(st,length(st)-1,2);
   val(st,k);
   insert(ch,s,k);
   i:=k;
   j:=k;
  while s[k]=s[i-1] do dec(i);
  while s[k]=s[j+1] do inc(j);
  if j-i+1>=3 then
    begin
       res:=j-i+1;
       dec(i);
       inc(j);
       if s[i]=s[j] then con(i,j,j,2);
    end;
   write(res);
end.