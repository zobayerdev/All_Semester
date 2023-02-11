#include<stdio.h>
int main()
{
    int n, i, j, flag = 0, timer = 0 ,counter=0;
    int c[10], tq[10], priority[10], process[10],w[10],t[10],   ram_b[10];

    printf("Enter the number of process: ");
    scanf("%d",&n);

    for(i =0; i<n; i++)
    {

        printf("\nEnter the cpu time of  P%d: ",i+1);
        scanf("%d", &c[i]);
        process[i] = i+1;
      ram_b[i]= c[i];

    }

    printf("Enter the Quantum Time:  ");
    scanf("%d", &tq[i]);

    for(timer = 0, i=0;  counter!=n;)
    {
        flag = 0;

        if(ram_b[i]  <    tq  && ram_b[i]>0)
        {
            timer  =  timer + ram_b[i];
            ram_b[i] = 0;
            flag =0;
        }

        else if(ram_b[i]>0)
        {
            timer = timer+tq;
            ram_b[i] =  ram_b[i]-= *tq;
        }

        if(ram_b[i] == 0  &&  flag == 1)
        {
            counter ++;
            t[i] = timer;
        }

        i++;
        i = i%n;
    }

    for(i = 1; i<n; i++)
    {
        w[i] = t[i]+c[i];
    }

    for(i =0; i<n; i++)
    {
        t[i] = w[i] + c[i];
    }


    printf("\n\nProcess\t     cpu time\t  priority\twaiting time\t Turnaround time\n");
    for(i=0; i<n; i++)
    {
        printf("P%d\t          %d\t\t%d\t\t%d\t\t%d\n", process[i],  c[i],  priority[i], w[i],  t[i]);
    }


   /* printf("\n Grand Chart: \n\n|");
    for(i=0; i<n; i++)
    {

        printf("P%d\t\t\t|",  i+1);
    }


    printf("\n0");
    for(i =0; i<n; i++)
    {
        printf(" \t\t\t%d", t[i]);
    }*/

}
