#include<iostream>
using namespace std;

class Item
{
static int countNum;
int number;
public:
    void getdata(int a)
    {
        number = a;
        countNum++;
    }
    void getcount(void)
    {
        cout << "count : "<<countNum << "\n";
    }
};

int Item :: countNum;
int main ()
{
    Item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(100);
    c.getdata(100);

    cout<<"\nAfter reading data"<<"\n\n";

    a.getcount();
    b.getcount();
    c.getcount();

    return 0;
}
