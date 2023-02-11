#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[], int n)
{
    int i = 0, j = 0, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nAfter sorted Array :\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[100], n, i, d, swap;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    bubble_sort(a, n);

    getch();
    return 0;
}
