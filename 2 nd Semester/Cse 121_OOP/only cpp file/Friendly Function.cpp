#include<iostream>
using namespace std;
class Sample {

int a;
int b;
public :
    void setValue() {a= 25; b=40;}
    friend float mean (Sample S);
};

float mean (Sample S)
{
    return float (S.a + S.b)/2.0;
}
int main ()
{
   Sample X;
    X.setValue();
    cout<< "Mean Value = "<<mean (X) << "\n";
    return 0;
}
