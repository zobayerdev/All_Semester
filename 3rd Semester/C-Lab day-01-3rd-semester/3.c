#include<stdio.h>
#include<conio.h>
int maximum(int x[])
{
    int i;
    int max = x[0];
    for(i=1;i<5;i++)
    {
        if(max<x[i])
            max = x[i];
    }
    return max;
}

int main()
{
    int num[]={10,20,4,90,50};

    int maximumvalue = maximum(num);
    printf("Maximum = %d\n",maximumvalue);
}
