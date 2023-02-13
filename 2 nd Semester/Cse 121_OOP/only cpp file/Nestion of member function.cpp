#include<iostream>
#include<conio.h>
using namespace std ;

class Set
{
   int m , n;

 public:
    void input(void);
    void display(void);
    void largest (void);

};
void Set :: largest (void)
{
    cout<<  "Input Value of m and n"<<endl;
    cin >> m>>n;
}

void  Set :: display ()
{
    largest ();
}

void  Set :: largest()
{
    if (m >= n)
        cout<< "Largest value  = " << m;
    else
        cout<< "Largest Value = "<< n;
}

int mian ()
{
     Set A ;
     A . input();
     A . display();
     return 0 ;

}






