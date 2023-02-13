#include<iostream>
using namespace std;

class set
{
    int m, n, p;
    string x, y, z;
public:
    void input (void);
    void display(void);
    void largest(void);
    void largestchar(void);
};
void set::input (void )
{
    cout<<"Enter the total marks of three students : "<<endl;
    cin>>m>>n>>p;
    cout<<"Enter the grades of three students [Ex: A, B, C, D, F]"<<endl;
    cin>>x>>y>>z;
}
void set::largest()
{
    if (m > n)
        cout<<"Largest Mark ="<<m;
    else if(p > n)
        cout<<"Largest Mark ="<<p;
        else
            cout<<"Largest Mark ="<<n;
}
void set::largestchar()
{

}
void set::display()
{
    largest();
    largestchar();
}
int main()
{
    set A;
    A.input();
    A.display();
    return 0;
}
