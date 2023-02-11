#include <iostream>
#include <string>
#include<conio.h>
using namespace std;
void insertoption(string str1, string str2,int n)
{
    cout<<endl<< endl<<"\t\t\t\t\t\tWhat index is you set your word :" ;
    cin>>n;

    str1.insert(n, str2);
    cout <<endl<< "\t\t\t\t\tUsing insert : ";
    cout << str1;
}


int main()
{
     char str1[100];
     char str2[100];
     int n;

    cout<<"\t\t\t\t\t\tEnter Your String : ";
    cin>>str1;


    cout<<endl<<"\t\t\t\t\tEnter Your String : ";
    cin>>str2;

    cout << endl<< "\t\t\t\t\t\tOriginal String : " << str1  ;

    cout<< endl << endl<< "\t\t\t\t\tChangeable-String : " << str2  ;
    insertoption(str1, str2,n);

    getch();
}
