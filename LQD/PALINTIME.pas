var ans1,ans2:string[2];
    res1,res2:byte;
function ds(x:byte):byte;
     var xau,s:string[2];
         i:byte;
begin
   str(x,s);
   xau:='';
  if length(s)=1 then s:='0'+s;
  for i:=1 to length(s) do xau:=s[i]+xau;
   val(xau,x);
   exit(x);
end;
procedure init;
	  var s:string[5];
	      so:byte;
begin
   readln(s);
   val(s[1],so);   // gio
   res1:=so*10;
   val(s[2],so);
   res1:=res1+so;
   val(s[4],so);   // phut
   res2:=so*10;
   val(s[5],so);
   res2:=res2+so;
end;
procedure solve;
begin
  if (res1=23) and (res2<32) then 
    begin
       ans1:='23';
       ans2:='32';
    end
   else
     if (res1=23) and (res2>=32) then
       begin
          ans1:='00';
          ans2:='00';
       end
    else
      if ds(res1)>res2 then
        begin
           str(res1,ans1);
           str(ds(res1),ans2);
        end
       else
         begin
            inc(res1);
            str(res1,ans1);
            str(ds(res1),ans2);
         end;
  if length(ans1)=1 then ans1:='0'+ans1;
  if length(ans2)=1 then ans2:='0'+ans2;
   write(ans1,':',ans2);
end;
begin
   init;
   solve;
end.