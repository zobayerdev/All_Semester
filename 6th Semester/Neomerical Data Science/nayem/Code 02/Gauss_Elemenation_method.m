A=input('Enter Your Co-Efficient Matrix:');
B=input('Enter Source Vector: ');
N=length(B);

%Find Unknowns%
x=zeros(N,1);

%Find Agumented Matrix%
Aug= [A B]

%Make all Pivot 0 below each pivot entry%
for j=1:N-1
  for i=j+1:N
    m=Aug(i,j)/Aug(j,j);
    Aug(i,:)=Aug(i,:)-m*Aug(j,:);
    
  endfor
 endfor
%New Agumented Matrix%
 Aug
 
 %Find Non 0 Pivit%
 x(N)=Aug(N,N+1)/Aug(N,N);
 
 %Back Substitution%
 for k=N-1:-1:1
   x(k)=(Aug(k,N+1)-Aug(k,k+1:N)*x(k+1:N)) /Aug(k,k);
 endfor
 
 %Final Answer%
 x
 
 