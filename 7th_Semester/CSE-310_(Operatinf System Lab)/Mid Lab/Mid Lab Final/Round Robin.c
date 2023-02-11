#include<stdio.h>

int main()
{
    int cpu_time[10], rem_cpu_time[10], waiting_time[10], turnaround_time[10], time_quantum, process[10], working_process[100], on_working_time[100], n, i,j,temp, flag, counter = 0, timer, running_job;
    float avg_w = 0, avg_t=0;

    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter Time Quantum: ");
    scanf("%d", &time_quantum);

    for(i=0; i<n; i++)
    {
        printf("CPU time of p%d: ", i+1);
        scanf("%d", &cpu_time[i]);

        rem_cpu_time[i] = cpu_time[i];
    }

    for(timer=0, running_job=0, i=0; counter !=n;)
    {
        flag = 0;
        if(rem_cpu_time[i] <= time_quantum && rem_cpu_time[i] > 0)
        {
            timer += rem_cpu_time[i];
            rem_cpu_time[i] = 0;
            flag = 1;

            //Get current working process name and time
            working_process[running_job] = i+1;
            on_working_time[running_job] = timer;
            running_job++;
        }
        else if(rem_cpu_time[i] > 0)
        {
            timer += time_quantum;
            rem_cpu_time[i] = rem_cpu_time[i] - time_quantum;

            //Get current working process name and time
            working_process[running_job] = i+1;
            on_working_time[running_job] = timer;
            running_job++;
        }

        if(rem_cpu_time[i] == 0 && flag == 1)
        {
            counter++;
            turnaround_time[i] = timer;
        }

        i++;
        i = i%n;
    }
    for(i=0; i<n; i++)
    {
        waiting_time[i] = turnaround_time[i] - cpu_time[i];
    }

    printf("Processes\tCPU time\tWaiting time\tTurnaround time\n");
    for(i=0; i<n; i++)
    {
        printf("p%d\t\t%d\t\t%d\t\t%d\n", i+1, cpu_time[i], waiting_time[i], turnaround_time[i]);
    }

    for(i=0; i<n; i++)
    {
        avg_w += waiting_time[i];
        avg_t += turnaround_time[i];
    }
    avg_w /= n;
    avg_t /= n;

    printf("Average Waiting Time: %.2f\n", avg_w);
    printf("Average Turnaround Time: %.2f\n", avg_t);

    printf("\n|");
    for(i=0; i<running_job; i++)
    {
        printf("P%d\t|", working_process[i]);
    }
    printf("\n0");
    for(i=0; i<running_job; i++)
    {
        printf("\t%d", on_working_time[i]);
    }
}
