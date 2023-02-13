#include<iostream>
using namespace std;

class CSE44
{
private:
    char name[100];
    int id,sec;
    int intake=44;

public:
    CSE44 ();
    ~CSE44();
    void read();
    void disp();
};

CSE44 :: CSE44()
{

}

void CSE44 :: read()
{

    cout<<"\nEnter The Student Name : ";
    cin >> name;
    cout<<"Enter ID : ";
    cin>>id;
    cout<<"Enter Section : ";
    cin>>sec;
}

void CSE44 :: disp()
{
    cout << "\n\nStudent Details" <<endl;
    cout<<"Student Name : "<<name<<endl;
    cout<<"ID : "<<id<<endl;
    cout<<"Section is : "<<sec<<endl;
    cout<<"Intake is : "<<intake;
}

CSE44 :: ~CSE44()
{

}
int main()
{
    CSE44 s[5];
    int i, n = 0;
    for (i =0 ; i<5; i++)
    {
        s[i].read ();
    }

    for (i = 0 ; i<5; i++)
    {

        s[i].disp ();
    }
    return 0;
}
