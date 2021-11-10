uses math;
const fi='';
      maxn=50000;
var a:array[1..maxn*4] of longint;
    b:array[0..maxn+1] of longint;
    n,m,p,so,i,j,u,v,kq:longint;
    f:text;
procedure update(k,i,j:longint);
	    var mid:longint;
begin
  if (i=j) then a[k]:=b[i]
   else
     begin
        mid:=(i+j) shr 1;
        update(k shl 1,i,mid);
        update(k shl 1+1,mid+1,j);
        a[k]:=max(a[k shl 1],a[k shl 1+1]);
     end;
end;
procedure up(k,lo,hi:longint);
	    var mid:longint;
begin
  if (v<lo) or (u>hi) then exit;
  if (u<=lo) and (v>=hi) then
    begin
       kq:=max(kq,a[k]);
       exit;
    end;
   mid:=(lo+hi) shr 1;
   up(k shl 1,lo,mid);
   up(k shl 1+1,mid+1,hi);
end;
begin
assign(f,fi);
reset(f);
   readln(f,n,m);
  for i:=1 to m do
    begin
       readln(f,u,v,so);
       inc(b[u],so);
       dec(b[v+1],so);
    end;
  for i:=1 to n do inc(b[i],b[i-1]);
   update(1,1,n);
   readln(f,p);
  for i:=1 to p do
    begin
       readln(f,u,v);
       kq:=0;
       up(1,1,n);
       writeln(kq);
    end;
close(f);
end.