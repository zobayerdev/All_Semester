#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    void xyz()
    {
        cout<< "xyz function is over read from base class"<<endl;
    }
};
class drive : public base
{
public:
    void xyz()
    {
        cout<< "xyz function is over read from drive class"<<endl;
    }
};
int main()
{
    drive ob;
    ob.base :: xyz();
    return 0;
}
