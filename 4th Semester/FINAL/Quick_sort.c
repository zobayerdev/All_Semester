#include<stdio.h>
int pertition(int a[],int low,int high)
{
    int pivot=a[low];
    int start=low;
    int end=high;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end++;
        }
        if(start<end)
        {
            int tmp=a[start];
            a[start]=a[end];
            a[end]=tmp;
        }
    }
    int tmp=a[low];
            a[low]=a[end];
            a[end]=tmp;
    return end;
}
void quick(int a[],int low,int high)
{
    if(low<high)
    {
        int loc=pertition(a,low,high);
        quick(a,low,loc-1);
        quick(a,loc+1,high);
    }
    else
    {
        return;
    }
}
int main()
{
    int a[100],n,i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quick(a,0,n-1);
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}