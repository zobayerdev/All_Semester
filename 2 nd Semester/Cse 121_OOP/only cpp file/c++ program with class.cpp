#include<iostream>
using namespace std;

class item
{
    int number ; //variable declaration
    float cost; // privet by default

public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout<<"Number :" <<number <<"\n";
        cout<<"cost : "<<cost << "\n";
    }
};

void item:: getdata(int a, float b)
{
        number = a;
        cost = b;
}

int main ()
{
    item x ;  // create object x
    cout<< "\noobject x "<<"\n";
    x.getdata(100, 299.5);
    x.putdata();

    item y;  // create anoter object
    y.getdata(200, 175.50);
    y.putdata();
}
