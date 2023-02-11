a = input ('first value : ');
b = input ('second value : ');

e = 0.001;

while(abs(a-b)>=e)
    m = biset(a,b);
    if(fun(m) == 0)
       a = m;
    elseif (fun(m) < 0)
       a = m;
    else
       b=m;
    end
 end
disp(a); 