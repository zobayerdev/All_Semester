int main()
{
    int cpu_time[10], waitting_time[10],arrival_time[10],turnaround_time[10],cpu_time_copy[10],process[10],i,j,n,temp, work_process[100],work_process_time[100],response_time[10] = {0};
    float avg_w=0,avg_t=0,avg_r=0;

    printf("Enter number of process: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter CPU time of P%d: ", i+1);
        scanf("%d", &cpu_time[i]);
        cpu_time_copy[i] = cpu_time[i];

        printf("Enter arrival time of P%d: ", i+1);
        scanf("%d", &arrival_time[i]);

        process[i] = i+1;
    }

    int counter=0,timmer=0,smallest=9,complete=0;
    cpu_time_copy[smallest] = 10000;

    for(counter = 0, timmer=0; counter !=n; timmer++){
        smallest = 9;

        for(i=0;i<n;i++){
            if(arrival_time[i]<=timmer && cpu_time_copy[i]<cpu_time_copy[smallest] && cpu_time_copy[i]>0){
                smallest = i;
            }
        }

        cpu_time_copy[smallest]--;
        work_process[timmer] = smallest+1;
        work_process_time[timmer] = timmer+1;

        if(response_time[smallest] == 0){
            avg_r += timmer+1;
            response_time[smallest] = timmer+1;
        }

        if(cpu_time_copy[smallest] == 0){
            counter++;
            complete = timmer+1;
            turnaround_time[smallest] = complete - arrival_time[smallest];
            waitting_time[smallest] = turnaround_time[smallest] - cpu_time[smallest];
        }
    }

    printf("Process\tArrival time\tCPU time\tWaiting time\tTurnaround time\tResponse Time\n");
    for(i=0;i<n;i++){
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\t%d\n", i+1, arrival_time[i], cpu_time[i], waitting_time[i], turnaround_time[i], response_time[i]);

        avg_w += waitting_time[i];
        avg_t += turnaround_time[i];
    }

    avg_w /= n;
    avg_t /= n;
    avg_r /= n;

    printf("Average waitting time: %.2f\n", avg_w);
    printf("Average turnaround time: %.2f\n", avg_t);
    printf("Average response time: %.2f\n", avg_r);

    printf("\n\n|");
    printf("Grand Chart\n\n");
    for(i=0;i<timmer;i++){
        printf("  P%d  |", work_process[i]);
    }
    printf("\n0");
    for(i=0;i<timmer;i++){
        printf("    %d", work_process_time[i]);
    }
}
