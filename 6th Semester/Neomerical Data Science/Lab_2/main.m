a = input('First value of = ');
b = input('Second value of = ');

error = 0.001;

if (((func(a))*(func(b))) < 0)

  while ((abs (a-b)) > error)
    
    c = ((a*(func(b)))-(b*(func(a)))) / ((func(b))-(func(a)));
    
    if (((func(a))*(func(b))) < 0)
      b = c;
      
    else
      a = c ;
          
  end 
  end
  ans = c ;
  
 end
 disp(ans)





