#include<stdio.h>
#include<conio.h>

void merge(int a[],int l,int mid,int r)
{
    int i,j,k=0,tmp[100];
    i=l;
    j=mid+1;

    while(i<=mid && j<=r)
    {
        if(a[i]<=a[j])
        {
            //tmp[k++]=a[i++];
            tmp[k]=a[i];
            i++;
        }
        else
        {
            //tmp[k++]=a[j++];
            tmp[k]=a[j];
            j++;
        }
        k++;
    }

    while(i<=mid)
    {
        //tmp[k++]=a[i++];
        tmp[k]=a[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        //tmp[k++]=a[j++];
        tmp[k]=a[j];
        j++;
        k++;
    }

    for(i=l,j=0;i<=r;i++,j++)
    {
        a[i]=tmp[j];
    }
}
void mergesort(int a[], int l, int r)
{
    if(l>=r)
    {
        return;
    }
    else
    {
        int mid=l+(r-l)/2;

        mergesort(a,l,mid);
        mergesort(a,mid+1,r);

        merge(a,l,mid,r);

    }
}
int main()
{
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    mergesort(a,0,n-1);

    printf("Sorted Array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}