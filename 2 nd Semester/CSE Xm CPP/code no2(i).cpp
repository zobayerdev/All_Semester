#include<iostream>
#include<conio.h>
using namespace std;

class IntegerArray
{
public:

int*data;

int size;

IntegerArray(int size)
{
data = new int[size];
this ->  size = size;
cout<<size<<endl; // This is the line which is missing the code
}

};

int main()
{
IntegerArray  arr (100000);

getch ();

}
