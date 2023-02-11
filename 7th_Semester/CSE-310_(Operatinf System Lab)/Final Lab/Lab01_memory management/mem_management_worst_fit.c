
#include <stdio.h>
int main()
{
    int process_no, process_size[10], block_no, block_size[10], block_check[10], track[10], i, j, temp;
    printf("Enter Process No: ");
    scanf("%d", &process_no);
    printf("Enter Process Values:\n");
    for(i = 0; i < process_no; i++)
    {
        printf("Process-%d: ", i+1);
        scanf("%d", &process_size[i]);
        track[i] = -1;

    }
    printf("\nEnter Block No: ");
    scanf("%d", &block_no);
    printf("Enter Block Values:\n");
    for(i = 0; i < block_no; i++)
    {
        printf("Block-%d: ", i+1);
        scanf("%d", &block_size[i]);
        block_check[i] = -1;
    }


    for (i = 0; i < process_no - 1; i++)
    {
        for (j = 0; j < process_no - i - 1; j++)
        {
            if (block_size[j] < block_size[j + 1])
            {
                temp = block_size[j];
                block_size[j] = block_size[j + 1];
                block_size [j+1] = temp;
            }
        }
    }

    printf("\nSorted Block Size: ");

    for(i = 0; i < block_no; i++)
    {
        printf("\nBlock-%d = %d  ", i+1, block_size[i]);
    }


    for(i = 0; i < process_no; i++)
    {
        for(j = 0; j < block_no; j++)
        {
            if(block_check[j] == -1 && process_size[i] <= block_size[j])
            {
                block_check[j] = i;
                track[i] = j;
                break;
            }
        }
    }

    printf("\nProcess No\tBlock No\tBock Size\n");
    for(i = 0; i < process_no; i++)
    {
        printf("%d\t\t%d\t\t%d\n", i+1, track[i]+1, block_size[track[i]]);
    }
}
