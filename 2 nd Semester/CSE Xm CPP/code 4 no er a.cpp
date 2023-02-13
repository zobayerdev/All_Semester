//multi level theke multiple e error ashe
//b ar c multi level e ase
#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int a,b,add;
    void sum(int a,int b)
    {
        add=a+b;
        cout << add;
    }
};

class B: public A
{
};

class C: public A
{
};

class D: public C
{
};

int main()
{
    D myObj;
    myObj.sum(10,5);
    return 0;
}
