// My-GP App Accounts setting

#include <iostream>
#include<conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

class MYGPAPP
{
public:
    char name[100];
    char gen[50];
    int dob;
    char cp[100];
    string mail;
    char add[100];


    void edit_yourname()
    {
        getchar();
        gets(name);
    }

    void input_value()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Gender : ";
        cin >>gen;
        cout << "Date Of Birth : ";
        cin >> dob;
        cout << "Address : ";
        cin >> add;
        cout << "G-mail: ";
        cin >> mail;
        cout << "Cover Photo: ";
        cin >> cp;
        cout<<endl;
        cout<<"Your Data is processing now. please wait"<<endl;


    }

    void display()
    {
        cout << endl<<endl;
        cout<<"Your-Data "<<endl;
        cout<<"Name  :  ";
        cout << name << endl;
        cout<<"Gender :  ";
        cout << gen<< endl;
        cout<<"Date Of Birth  :  ";
        cout <<dob<< endl;
        cout<<"Address :  ";
        cout <<add << endl;
        cout<<"G-mail  :  ";
        cout << mail<< endl;
        cout<<"Cover Photo : ";
        cout <<cp<< endl<<endl;
        cout<<"Thank You.Your Data is saved successfully."<<endl;
        cout << endl;



    }
};



int main()
{
    MYGPAPP profile;
    profile.input_value();
    profile.display();

    getch();

}
