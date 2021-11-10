var a,b,c:word;
begin
   read(a,b,c);
  if (a>b) and (a<c) then write(a);
  if (a<b) and (a>c) then write(a);
  if (b>a) and (b<c) then write(b);
  if (b<a) and (b>c) then write(b);
  if (c>a) and (c<b) then write(c);
  if (c<a) and (c>b) then write(c);
end.