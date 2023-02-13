#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:
    int calVolume(void);
    void setLength(int len);
    void setWidth(int wid);
    void setHeight(int hei);
    void compareBox();
};

int Box:: calVolume(void)
{
    return length * width * height;
}
void Box::setLength(int len)
{
    length = len;
}
void Box::setWidth(int wid)
{
    width = wid;
}
void Box::setHeight(int hei)
{
    height = hei;
}
int main()
{
    Box Box1;
    Box Box2;
    int volume;

    Box1.setLength(6);
    Box1.setWidth(7);
    Box1.setHeight(5);

    Box2.setLength(8);
    Box2.setWidth(10);
    Box2.setHeight(9);

    volume = Box1.calVolume();
    cout << "Box1 Volume: " << volume <<endl;


    volume = Box2.calVolume();
    cout << "Box2 Volume: " << volume <<endl;

    int compareBox(max(Box2.calVolume(), Box1.calVolume()));

    cout<<"Bigger Volume : " << compareBox <<endl;
    return 0;
}
