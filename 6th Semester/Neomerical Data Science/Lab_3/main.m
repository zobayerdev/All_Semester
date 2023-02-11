a = input ('Enter initial Value: ');
U = input ('The number of Iterations: ');

nayem_count = 0;

error = 0.00001;

    temp = fun(a);
    while(abs(fun(a)) > error)
      guess1 = fun(a);
      guess2 = func(a);
        a = a -  (guess1/guess2);
        nayem_count = nayem_count + 1;
        if(nayem_count > U)
          break;
        end
     end
     disp(nayem_count);
     disp(a);