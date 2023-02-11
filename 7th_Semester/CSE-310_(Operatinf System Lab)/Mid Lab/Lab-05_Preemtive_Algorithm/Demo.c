#include<stdio.h>

//input for this coding
/*
1 0 1
4 1 1
5 0 0
1 0 0
5 2 1
 */

int main()
{
    int i, j, k, l, q, m = 0, no_process = 5, no_res = 3, flag = 0, flag2, flag3;
    int need[5][3], available[3]= {3,3,2}, finish_val[5]= {0}, seq[5], req[3];
    int max[5][3] = {{7,5,3},{3,2,2},{9,0,2},{2,2,2},{4,3,3}};
    int allocate[5][3] = {{0,1,0},{2,0,0},{3,0,2},{2,1,1},{0,0,2}};

    for(i = 0; i < no_process; i++)
    {
        for(j = 0; j < no_res; j++)
        {
            need[i][j] = max[i][j] - allocate[i][j];
        }
    }

    printf("Need Request Value for this Matrix:\n");
    for (int m = 0; m < no_process; m++)
    {
        for (k = 0; k < no_res; k++)
        {
            printf("%d\t", need[m][k]);
        }
        printf("\n");
    }



    for(i = 0; i < no_process; i++)
    {
        printf("\nEnter Request for Process of:-  %d: ", i+1);
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &req[j]);
            flag2 = 0;
        }

        for(j = 0; j < no_res; j++)
        {
            if(need[i][j] < req[j])
            {
                flag2 = 1;
                break;
            }
        }

        if(flag2 == 1)
        {
            printf("The request of Process-%d is invalid!\n", i+1);
        }
        else
        {
            printf("The request of Process-%d is valid!\n", i+1);
            flag3 = 0;
            for(k = 0; k < no_res; k++)
            {
                if(available[k] < req[k])
                {
                    flag3 = 1;
                }
            }
            if(flag3 == 0)
            {
                printf("!!!Congratulation!!! \nThe request of Process-%d is satisfied!\n", i+1);
            }

            else
            {
                printf("!!!Sorry!!! \n The request of Process-%d is unsatisfied!\n", i+1);
            }
        }
    }


    for(l = 0; l < no_process; l++)
    {
        for(i = 0; i < no_process; i++)
        {
            if(finish_val[i] == 0)
            {
                flag = 0;
                for(j = 0; j < no_res; j++)
                {
                    if(need[i][j] > available[j])
                    {
                        flag = 1;
                        break;
                    }
                }

                if(flag == 0)
                {
                    for(k = 0; k < no_res; k++)
                    {
                        available[k] = available[k] + allocate[i][k];
                    }
                    finish_val[i] = 1;
                    seq[m++] = i;
                }
            }
        }
    }


    for(i = 0; i < no_process; i++)
    {
        if(finish_val[i] == 0)
        {
            flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("\n\nThe process is safe!\n");
    }

    else
    {
        printf("\n\nThe process is unsafe!\n");
    }


    for(q = 0; q < no_process; q++)
    {
        printf("P%d\n", seq[q]);
    }
}
