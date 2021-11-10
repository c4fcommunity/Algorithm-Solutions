var a:array[1..7] of longint;
    i,j,t,res:longint;
begin
   readln(t);
  for j:=1 to t do
    begin
      for i:=1 to 7 do readln(a[i]);
       res:=a[1]+a[2]+a[3]-a[4]-a[5]-a[6]+a[7];
      if (res<a[1]) or (res<a[2]) or (res<a[3]) or (res<a[4]) or (res<a[5]) or (res<a[6]) or (res<a[7]) then writeln('-1')
       else
         if (a[7]>a[1]) or (a[7]>a[2]) or (a[7]>a[3]) or (a[7]>a[4]) or (a[7]>a[5]) or (a[7]>a[6]) then writeln('-1')
          else
            if (a[5]>a[1]) or (a[6]>a[1]) or (a[5]>a[2]) or (a[4]>a[2]) then writeln('-1')
             else 
               if res<=0 then writeln('-1')
                else writeln(res);
    end;
end.