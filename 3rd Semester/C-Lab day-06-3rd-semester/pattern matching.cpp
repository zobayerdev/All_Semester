#include<iostream>
using namespace std;

void pattern(string a,string b)
{

    int y ;
    y= a.find(b);
    while(y>=0)
    {
        cout << "Find in " << y+1 << " index" << endl;
        y = a.find(b,y+1);
    }
}

int main()
{

    string a;
    string b;
    cout<<"Enter your name : " ;
    cin>>a;
    cout << "\n\tYour typed  String: " << a;

    cout << "\n\t\t\t\tEnter a value to search in the string: ";
    cin >> b;

    pattern(a,b);
}
