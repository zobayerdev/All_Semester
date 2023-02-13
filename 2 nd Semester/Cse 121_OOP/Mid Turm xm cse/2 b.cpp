#include<iostream>
using namespace std;
class coordinate
{
public:
    int x, y, z;
    void set(int x1, int y1, int z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    void show()
    {
        cout<<"\nThe value of a is: "<<x<<endl;
        cout<<"The value of b is: "<<y<<endl;
        cout<<"The value of c is: "<<z<<endl;
    }
};
int main()
{
    coordinate object1;
    object1.set(5, 10, 20);
    coordinate object2 = object1;
    object1.show();
    object2.show();
    return 0;
}
