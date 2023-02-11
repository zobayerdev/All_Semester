#include <stdio.h>
#include<conio.h>

void b_s(char array[], int n, int i)
{
    int beg, high, mid;
    char key;
    printf("Enter required value to find: ");
    scanf("%s", &key);
    beg = 0;
    high = n - 1;
    mid = (beg + high) / 2;
    while (beg <= high)
    {
        if (array[mid] < key)
            beg = mid + 1;
        else if (array[mid] == key)
        {
            printf("The searching value found in the %d Index Position ", mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (beg + high) / 2;
    }
    if (beg > high)
        printf("Value not found in this Array\n");
}

int main()
{
    char array[100];
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d Character: \n", n);
    for (i = 0; i < n; i++)
        scanf("%s", &array[i]);
    b_s(array, n, i);

    getchar();
}
