#include <bits/stdc++.h>
using namespace std;

class IntegerNumber {
    int value;

public:

    IntegerNumber(int value = 0)
    {
        this->value = value;
    }

    IntegerNumber operator++(int)
    {
        IntegerNumber temp;
        temp.value = value++;
        return temp;
    }
    void display()
    {
        cout << "value = " << value << endl;
    }
};

int main()
{
    IntegerNumber N(10);
    IntegerNumber obj = N++;
    obj.display();
}
