#include <iostream>
#include<conio.h>

using namespace std;

void string_delete(string a,string b,int n)
{
    int o,w,i,x;
    n=n-1;
    x=a.size();
    for(i=1; i<=x; i++)
    {
        o=a.find(b);
        w=b.size();
        a.erase(o,w);
        cout<<endl<<"After Erase :  "<<a<<endl<<endl<<endl;
    }
}

int main()
{
    string a;
    string b;
    int n;

    cout<<"\t\t\t\tEnter your string: ";
    cin>>a;

    cout<<endl<<endl<<"\t\t\t\tEnter your second : ";
    cin>>b;

    string_delete(a,b,n);

    getch();
}

