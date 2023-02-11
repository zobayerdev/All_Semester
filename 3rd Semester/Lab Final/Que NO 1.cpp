#include <iostream>
using namespace std;

char queue[10];
int n = 10, front = 0, rear = 0;

void in_q(char item)
{
    if(front == 1 && rear == n)
        cout << "Queue Overflowed" << endl;
    else if(front == 0)
    {
        front = 1;
        rear = 1;
    }
    else
        rear += 1;

    queue[rear] = item;
}


void out_q()
{
    if(front == 0)
    {
        cout << "\nQueue Underflowed" << endl;
    }
    else if (front == rear)
    {
        cout << queue[front] << " is deleted." << endl;
        front = 0;
        rear = 0;
    }

    else
    {
        cout << queue[front] << " is deleted." << endl;
        front += 1;
    }
}



void dis_q()
{
    if(front > 0)
    {
        cout << "\nThe elements are: \n";
        int i;
        for(i = front; i <= rear; i++)
        {
            cout << queue[i] << endl;
        }
    }


    else
        cout << "The queue is empty." << endl;
}


int main()
{
    int a;
   char  n;


    cout<<"\t  1. Queue Insert    \n";
    cout<<"\t  2. Queue Delete   \n";
    cout<<"\t  3. Display        \n";
    cout<<"\t  4. Exit           \n";


    do
    {
        cout << "\nEnter your choice: ";
        cin >> a;

        switch(a)
        {
        case 1:
            cout << "\nEnter a character to insert into the queue: ";
            cin >> n;
            in_q(n);
            break;

        case 2:
            out_q();
            break;

        case 3:
            dis_q();
            break;

        case 4:
            cout<<"Program Closed\n";

            break;

        default:
            cout<<"\nInvalid choice. Try again.\n";
            main();
            break;
        }
    }
    while (a!=4);

    return 0;
}
