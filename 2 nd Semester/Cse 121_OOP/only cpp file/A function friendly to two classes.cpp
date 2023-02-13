#include<iostream>
using namespace std;

class ABC ;
class XYZ{
int x;
public:
    void setValue (int i ) {x = 1 ;}
    friend void max(XYZ, ABC);

};

class ABC{
int x;
public :
    void setValue (int i){x = i;}
    friend void max (XYZ, ABC);

};

void max (XYZ m, ABC n)
{
    if (m.x >= n.x)
        cout<< " Max : " << m.x;
    else
        cout<< "Max : "<< n.x;
}

int main ()
{
    ABC abc;
    abc.setValue(10);
    XYZ xyz;
    xyz.setValue(20);
    max(xyz, abc);

    return 0;
}
