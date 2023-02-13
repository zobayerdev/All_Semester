#include<iostream>
using namespace std;

class set
{
    int m, n, p;
    char x, y, z;
public:
    void input (void);
    void largest(void);
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
    if(m >= n && m >= p)
        cout << "Largest number: " << m << "\nLargest Grade : " << x;

    if(n >= m && n >= p)
        cout << "Largest number: " << n << "\nLargest Grade : " << y;

    if(p >= m && p >= n)
        cout << "Largest number: " << p << "\nLargest Grade : " << z;
}
int main()
{
    set A;
    A.input();
    A.largest();
    return 0;
}
