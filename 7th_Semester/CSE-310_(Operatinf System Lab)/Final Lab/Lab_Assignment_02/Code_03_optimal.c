#include<stdio.h>
int main()
{
    int f, n, frames[10], p[30], temp[10], flag1, flag2, flag3, i, j, k, pos, max, count = 0;
    printf("ENTER THE NUMBER OF PAGES: ");
    scanf("%d", &n);
    printf("ENTER THE NUMBER OF FRAMES: ");
    scanf("%d", &f);
    printf("ENTER PAGE REFERENCE STRING: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &p[i]);
    }
    for(i = 0; i < f; ++i)
    {
        frames[i] = -1;
    }
    for(i = 0; i < n; ++i)
    {
        flag1 = flag2 = 0;
        for(j = 0; j < f; ++j)
        {
            if(frames[j] == p[i])
            {
                flag1 = flag2 = 1;
                break;
            }
        }
        if(flag1 == 0)
        {
            for(j = 0; j < f; ++j)
            {
                if(frames[j] == -1)
                {
                    count++;
                    frames[j] = p[i];
                    flag2 = 1;
                    break;
                }
            }
        }
        if(flag2 == 0)
        {
            flag3 =0;

            for(j = 0; j < f; ++j)
            {
                temp[j] = -1;

                for(k = i + 1; k < n; ++k)
                {
                    if(frames[j] == p[k])
                    {
                        temp[j] = k;
                        break;
                    }
                }
            }
            for(j = 0; j < f; ++j)
            {
                if(temp[j] == -1)
                {
                    pos = j;
                    flag3 = 1;
                    break;
                }
            }
            if(flag3 ==0)
            {
                max = temp[0];
                pos = 0;

                for(j = 1; j < f; ++j)
                {
                    if(temp[j] > max)
                    {
                        max = temp[j];
                        pos = j;
                    }
                }
            }
            frames[pos] = p[i];
            count++;
        }
        printf("\n");

        for(j = 0; j < f; ++j)
        {
            printf("%d\t", frames[j]);
        }
    }
    printf("\nTotal Page count = %d", count);
    return 0;
}
