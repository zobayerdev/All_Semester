#include<iostream>
using namespace std;

class integer
{
    int m,n ;
    public :
        integer ( int x, int y); // constructor declared
        void display ( void)
        {
            cout<< " m "<< m << "\n";
            cout<< " n "<<  n <<"\n";
        }
};
 integer :: integer ( int x, int y)// constructor  defined
 {
     m = x ; n=  y;
 }

 int main()
 {
     integer int1 = integer ( 60, 100);

     integer int2 (25, 75);
     cout<< "OBJECT1 "<< "\n";
     int1.display ();

     cout<<"\nOBJECT2" << "\n";
     int2.display ();


    return 0 ;

 }
