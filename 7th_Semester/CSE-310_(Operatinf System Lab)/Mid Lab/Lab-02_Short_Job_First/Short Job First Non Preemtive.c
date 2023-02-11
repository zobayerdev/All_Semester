#include <stdio.h>
int main ()
{
    int n, i, j, temp1, temp2, temp3;
    int c [10], w [10], t [10], arrive [10], process [10];
    float sum_w, sum_t;
    float avg_w, avg_t;
    printf("Enter the number of processes: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        printf("\nEnter the CPU Time of P%d: ", i+1);
        scanf("%d", &c[i]);

        process[i] = i+1;

        printf("Enter the Arrival Time of P%d: ", i+1);
        scanf("%d", &arrive[i]);
    }
    for (i = 1; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if(c[i] > c[j])
            {
                temp1 = c[i];
                c[i] = c[j];
                c[j] = temp1;

                temp2 = process[i];
                process[i] = process[j];
                process[j] = temp2;

                temp3 = arrive[i];
                arrive[i] = arrive[j];
                arrive[j] = temp3;
            }
        }
    }
    w[0] = 0;
    for(i = 1; i < n; i++)


    {
        w[i] = w[i-1] + c[i-1];
    }

    for(i = 1; i < n; i++)
    {
        w[i] = w[i] - arrive[i];
    }

    for(i = 0; i < n; i++)
    {
        t[i] = w[i] + c[i];
    }
    printf("\n\nProcess\t   Arrival Time\tCPU Time\tWaiting Time\tTurnaround Time\n");
    for(i = 0; i < n; i++)
    {
        printf("P%d\t   %d\t\t%d\t\t%d\t\t%d\n", process[i], arrive[i], c[i], w[i], t[i]);
    }
    for(i = 0; i < n; i++)
    {
        sum_w += w[i];
        sum_t += t[i];
    }
    avg_w = sum_w/n;
    avg_t = sum_t/n;
    printf("\nAverage Waiting Time: %.2f", avg_w);
    printf("\nAverage Turnaround Time: %.2f", avg_t);
    printf("\n\nGrand Chart:\n\n|");
    for(i = 0; i < n; i++)
    {
        printf(" P%d     |", i+1);
    }
    printf("\n0");
    for(i = 0; i < n; i++)
    {
        printf("       %d", t[i]+arrive[i]);
    }
}
