// Round Robin
#include<stdio.h>

int main(){
    int cpu_time[10],sum=0, count=0,   rem_cpu_time[10],    waiting_time[10],     turnaround_time[10],     time_quantum,     process[10];
    int n, i,j,temp, flag, counter = 0, timer;
    int wt=0, tat=0,at[10], bt[10];
    float avg_wt, avg_tat;

    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter Time Quantum: ");
    scanf("%d", &time_quantum);

    for(i=0;i<n;i++){
        printf("CPU time of p%d: ", i+1);
        scanf("%d", &cpu_time[i]);

        rem_cpu_time[i] = cpu_time[i];
    }

    for(timer=0, i=0; counter !=n;){
               flag = 0;
               if(rem_cpu_time[i] <= time_quantum && rem_cpu_time[i] > 0){
                      timer += rem_cpu_time[i];
                      rem_cpu_time[i] = 0;
                      flag = 1;
               }else if(rem_cpu_time[i] > 0){
                          timer += time_quantum;
                          rem_cpu_time[i] = rem_cpu_time[i] - time_quantum;
               }

               if(rem_cpu_time[i] == 0 && flag == 1){
                      counter++;
                      turnaround_time[i] = timer;
               }

               i++;
               i = i%n;
    }
    for(i=0;i<n;i++){
        waiting_time[i] = turnaround_time[i] - cpu_time[i];
    }

    printf("Processes\tCPU time\tWaiting time\tTurnaround time\n");
    for(i=0; i<n; i++){
        printf("p%d\t\t%d\t\t%d\t\t%d\n", i+1, cpu_time[i], waiting_time[i], turnaround_time[i]);
    }

}
