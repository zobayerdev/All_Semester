a = input('Lower Limit For False Position Method: ');
b = input('Lower Limit For False Position Method: ');
e = 0.0001;
while(false(a)*false(b)>0)
    a = input('Next Lower Limit For False Position Method: ');
    b = input('Next Lower Limit For False Position Method: ');
end
while(abs(a-b)>e)
    c=((a*false(b))-(b*false(a)))/(false(b)-false(a));
    %disp(c);
    if(false(a)*false(b)<0)
        b=c;
    else
        a=c;
    end
end
dprintf('Value of Root: \n');
disp(c);