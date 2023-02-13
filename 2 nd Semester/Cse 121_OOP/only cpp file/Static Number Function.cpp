#include<iostream>
using namespace std;

class Test{
int code ;
static int count ;
public:
    void setCode(void)
    {
        code = ++count;
    }
    void showCode(void)
    {
        cout<< "object Number : " <<code<<endl;
    }
    static void showCount (void) // static member fu
    {
        cout<< "count:"<<count<<endl;
    }

};

int Test :: count;

int main()
{
    Test t1,t2;

    t1.setCode();
    t2.setCode();

    Test :: showCount();

    Test t3;
    t3.setCode();

    Test :: showCount();

    t1.showCode();
    t2.showCode();
    t3.showCode();

    return 0 ;
}
