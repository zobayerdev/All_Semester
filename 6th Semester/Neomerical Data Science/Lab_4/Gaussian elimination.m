Info = [4 3 2; 5 4 3; 7 15 6];
A = [6; 2; -1];
x = [info A];
for i =1:size(x, 1)
  for j=i+1:size(x,1)
    key1 = x(j,i)./x(i,i);
    x(j,:)=x(j,:)-key1*x(i,:);
  end
end
x