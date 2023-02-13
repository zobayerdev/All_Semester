#include <bits/stdc++.h>

using namespace std;

class A

{
public:
int id_f;
};


class B : public A
{
public:
int id_p;
};

class C : public A  {
public:
int id_c;
};


class D : public B, public C
{
public:
int id_c;
};


int main()
{
D obj1;

obj1.id_c = 7;
obj1.id_p = 91;
cout << "Child id is " <<  obj1.id_c << endl;

cout << "Parent id is " <<  obj1.id_p << endl;
return 0;
}
