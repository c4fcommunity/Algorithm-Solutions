{uses math;
const fi='';
      maxn=50000;
var a:array[1..maxn*4] of longint;
    b:array[0..maxn+1] of longint;
    n,m,p,so,i,j,u,v,kq:longint;
    f:text;
procedure update(k,i,j,lo,hi:longint);
	    var mid:longint;
begin
  if (i=lo) and (j=hi) then inc(a[k],so);
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
   read(f,n,m);
  for i:=1 to n do
    begin
       read(f,cs);
      if cs=0 then
        begin
           read(f,u,v,so);
        end
       else
         begin
         end;
    end;
close(f);
end.}


const fi='';
      fo='';
      maxn=50000;
var i,x,y,n,val,m,p,re,w:longint;
    a,mx:array[1..maxn shl 2] of longint;

function min(a,b:longint):longint;
begin
     if a<b then min:=a else min:=b;
end;

function max(a,b:longint):longint;
begin
     if a>b then max:=a else max:=b;
end;

procedure add(node,l,r,x,y:longint);
var mid:longint;
begin
     if (l=x) and (r=y) then
     begin
          a[node]:=a[node]+val;
          mx[node]:=mx[node]+val;
     end
     else
     begin
          mid:=(l+r) shr 1;
          if x<=mid then add(node shl 1,l,mid,x,min(y,mid));
          if mid<y then add(node shl 1+1,mid+1,r,max(x,mid+1),y);
          mx[node]:=max(mx[node shl 1],mx[node shl 1+1])+a[node];
     end;
end;
procedure findmax(node,l,r,x,y:longint;var t:longint);
var mid,u,v:longint;
begin
     if (l=x) and (r=y) then t:=mx[node]
     else
     begin
          mid:=(l+r) shr 1; u:=-maxlongint; v:=u;
          if x<=mid then findmax(node shl 1,l,mid,x,min(y,mid),u);
          if mid<y then findmax(node shl 1+1,mid+1,r,max(x,mid+1),y,v);
          t:=max(u,v)+a[node];
     end;
end;
begin
     assign(input,fi); reset(input);
     assign(output,fo); rewrite(output);
     readln(n,m);
     for i:=1 to m do
     begin
          read(w);
          if w=0 then
          begin
               readln(x,y,val);
               add(1,1,n,x,y);
          end
          else
          begin
               readln(x,y);
               findmax(1,1,n,x,y,re);
               writeln(re);
          end;
     end;
     close(input); close(output);
end.