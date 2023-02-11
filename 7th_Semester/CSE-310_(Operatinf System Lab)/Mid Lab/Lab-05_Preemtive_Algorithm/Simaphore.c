#include <stdio.h>

signal(int s)
{
    s = 6;
    printf("Set value for S: %d\n", s);
    return(s);
}

wait(int s)
{
    int resource;
    if(s <= 0)
    {
        printf("You have Used all Resource!\n");
        s = signal(s);
    }
    printf("Remaining value of S is: %d\n", s);
    printf("How many Resources you want to use: ");
    scanf("%d", &resource);
    s = s - resource;
    wait(s);
}

int main()
{
    int s = 0;
    printf("Enter initial value for S: ");
    scanf("%d", &s);
    if(s == 0)
    {
        int s_return = signal(s);
        s = s_return;
    }
    wait(s);
}
