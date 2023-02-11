#include <stdio.h>
int main()
{
    int n, c[10], w[10] = {0}, t[10], arrive[10], temp[10], counter = 0, endcounter = 0, timer = 0, smalest = 9;
    float avgW = 0, sumW = 0, avgT = 0, sumT = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the CPU Time of P%d: ",
               i+1);
        scanf("%d", &c[i]);
        temp[i] = c[i];
        printf("Enter the Arrival Time of P%d: ",
               i+1);
        scanf("%d", &arrive[i]);
    }
    c[smalest] = 9999;
    for (timer = 0; counter != n; timer++)
    {
        smalest = 9;
        for (int i = 0; i < n; i++)
        {
            if (arrive[i] <= timer && c[i] <
                    c[smalest] && c[i] > 0)
            {
                smalest = i;
            }
        }
        c[smalest]--;
        if (c[smalest] == 0)
        {
            counter++;
            endcounter = timer + 1;
            t[smalest] = endcounter -
                         arrive[smalest];
        }
    }
    printf("\nProcess\tArrival Time\tCPU Time\tWaiting Time\tTurnaround Time");
    printf("\n-------\t ------------\t--------\t------------\t---------------\n");
                  for (int i = 0; i < n; i++)
{
    w[i] = t[i] - temp[i];
        printf("P%d      \t%d         \t%d       \t%d           %d\n", i+1, arrive[i], temp[i], w[i],t[i]);
    }


    for (int i = 0; i < n; i++)
{
    sumW += w[i];
        sumT += t[i];
    }


avgW = sumW / n;
           avgT = sumT / n;
           printf("Average Waiting Time: %f", avgW);
           printf("\nAverage Turnaround Time: %f", avgT);
           return 0;
}
