a=input('First Value:');
b=input('Second Value:');
e=0.0001;

while(abs(a-b)>=e)
  mid=biset(a,b);
  
  if(func(mid)==0)
    a=mid;
  elseif(func(mid)<0)
  a=mid;
  elseif(func(mid)>0)
  b=mid;
  end
end
disp(a)

m=input('Enter the initial guess: ');
N=input('Number of iteration: ');
count=0;


int= func(m);
while(abs(func(m))>e)
    guess1=func(m);
    guess2=newton_func_rev(m);
    m=m-(guess1/guess2);
    count=count+1;
    if (count>N)
        break;
    end
    %disp(count);
    fprintf("The value is :%f\n",count);
end
disp(m);

if a>m
  fprintf("Biset :%f\n",a);
else if a<m
  fprintf("Newton :%f\n",m);
endif
end