#include<iostream>
#include<conio.h>
#include<string>
 using  namespace std;

 class person
 {
 public:
virtual void display()
    {
        cout <<"I am a programmer. " <<endl;
}
 };

 class student : public person
 {
 public:
void display()
    {
         cout<<"I am a Google Engineer"<<endl;
    }
 };

  class Teacher : public person
 {
 public:
void display()
    {
         cout<<" Teacher "<<endl;

    }
 };

 int main ()
 {
    student s;


    Teacher T;


    person  *p ;
       p = &s ;
       p -> display();

        p = &T;
        p -> display();

        getch();
 }
