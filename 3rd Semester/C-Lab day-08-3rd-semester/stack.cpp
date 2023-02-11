#include<iostream>
using namespace std;

char stack[10], maxstk=3, top=0;

void push(int item)
{
    if (top==maxstk)
    {
        cout<<"\t\t\t\tOverflow\n";
    }
    else
    {
        top=top+1;
        stack[top]=item;
    }
}

void pop()
{
    if (top==0)
    {
        cout<<"\t\t\t\tUnderflow\n";
    }
    else
    {
        cout<<stack[top];
        cout<<" POP Done";
        top=top-1;

    }
}

void display()
{
    if(top>0)
    {
        cout<<"\n\t\t\tThis stack elements :  \n";
            for (int i = top; i > 0; --i)
            {
                cout<<stack[i]<<endl;
            }

    }

    else
        cout<<"stack is empty" ;
}

int main()
{
    int a;
    char b;
    cout<<"\t\t\t\t1 For Push\n\t\t\t\t2 For Display\n\t\t\t\t3 For POP\n\t\t\t\t4 For End\n";
    do
    {
        cout<<" \n\t\t\tPlease Enter your option: ";
        cin>>a;
        switch (a)
        {
        case 1:
            cout<<"\n\t\t\tEnter value: ";
            cin>>b;
            push(b);
            break;
        case 2:
            display();
            break;
        case 3:
            cout<<"Last value popped\n";
            pop();
            break;
        case 4:
            cout<<"Exit\n";
            break;
        default:
            cout<<"Invalid";
            break;
        }
    } while (a!=4);

    return 0;
}
