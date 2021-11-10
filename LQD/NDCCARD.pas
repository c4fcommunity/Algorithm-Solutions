var a:array[1..10000] of integer;
    m:longint;
    n:integer;
procedure input;
	  var i:integer;
begin
   read(n,m);
  for i:=1 to n do read(a[i]);
end;
procedure quicksort(l,r:longint);
      var i,j,tam,x:longint;
begin
   x:=a[(l+r) shr 1];
   i:=l;
   j:=r;
  Repeat
    while a[i]>x do inc(i);
    while x>a[j] do dec(j);
    if i<=j then
      begin
         tam:=a[i];
         a[i]:=a[j];
         a[j]:=tam;
         inc(i);
         dec(j);
      end;
  until i>j;
  if l<j then quicksort(l,j);
  if i<r then quicksort(i,r);
end;
function search(k:longint;j:integer):integer;
     var l,r,x:integer;
begin
        l:=j+1;
        r:=n;
        repeat
                x:=(l+r) shr 1;
                if (a[x]<=k) and (a[x-1]>k) then exit(x);
                if a[x]<k then r:=x-1;
                if a[x]>k then l:=x+1;
        until l>r;
        exit(j+1);
end;
procedure xuly;
	  var i,j:integer;
	      x:longint;
	      max,s:longint;
begin
   max:=0;
  if a[1]+a[2]+a[3]<=m then
    begin
       write(a[1]+a[2]+a[3]);
       exit;
    end;
  for i:=1 to n-1 do
    for j:=i+1 to n do
      begin
         x:=search(m-a[i]-a[j],j);
         s:=a[x]+a[i]+a[j];
        if (s>max) and (s<=m) then max:=s;
        if max=m then break;
      end;
  if n<4 then write(a[1]+a[2]+a[3])
   else write(max);
end;
begin
   input;
   quicksort(1,n);
   xuly;
end.