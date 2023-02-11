#include <stdio.h>
#include<conio.h>

int func(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int arr[] = {-1,-2,13,12,14,7,6,7,5,4 };
    int x;
    printf("Enter Your Number = ");
    scanf("%d",&x);
    int n = sizeof(arr) / sizeof(arr[0]);

// call function
    int result = func(arr, n, x);
    if(result == -1)
        printf("\nElement is not present in array");
        else
        printf("\nElement is present at index %d", result);
    getch ();
}
