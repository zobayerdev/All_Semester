#include <stdio.h>
void binary(int mid, char array[ ], int key, int n )
{
   int Beg = 0;
   int End = n - 1;
    mid = (Beg+End)/2;
    while (Beg <= End)
    {
        if(array[mid] < key)
            Beg = mid + 1;
        else if (array[mid] == key)
        {
            printf("\n%s found at location %d.", key, mid+1);
            break;
        }
        else
            End = mid - 1;
            mid = (Beg + End)/2;
    }
    if(Beg >End)
        printf("\n ###         OOPS ! Sorry Not found! %d isn't present in the list.            ###", key);
    getch ();

}

int main()
{
    char i, n,key;
    char array[100];
    printf("Enter number of elements :  ");
    scanf("%d",&n);


    printf("\nEnter  %d  Number:   ", n);
    for(i = 0; i < n; i++)
    scanf("%s",&array[i]);

    printf("\nEnter value to find: ");
    scanf("%s", &key);


    binary(i, array,  key, n);

}
