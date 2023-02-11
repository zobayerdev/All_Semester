A=input('Enter Your Co-Efficient Matrix:');
B=input('Enter Source Vector: ');
N=length(B);

%Find Unknowns%
x=zeros(N,1);

%Find Agumented Matrix%
augment= [A B]

%Make all Pivot 0 below each pivot entry%
for j=1:N-1
  for i=j+1:N
    m=augment(i,j)/augment(j,j); %augmented function
    augment(i,:)=augment(i,:)-m*augment(j,:);
   
  endfor
 endfor
%New Agumented Matrix%
 augment
 
 %Find Non 0 Pivit%
 x(N)=augment(N,N+1)/augment(N,N);
 
 %Back Substitution%
 for k=N-1:-1:1
   x(k)=(augment(k,N+1)-augment(k,k+1:N)*x(k+1:N)) /augment(k,k);
 endfor
 
 %Final Answer%
 x