#include<iostream>
using namespace std;
void merge(int a[],int l, int mid, int r)
{
    int i,j,k=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int left[n1],right[n2];

    for(i=0;i<n1;i++)
    {
        left[i]=a[l+i];
    }

    for(j=0;j<n2;j++)
    {
        right[j]=a[mid+1+j];
    }

    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i++];
            //i++;
        }
        else
        {
            a[k]=right[j++];
            //j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k++]=left[i++];
        //i++;
        //k++;
    }

    while(j<n2)
    {
        a[k++]=right[j++];
        //j++;
        //k++;
    }
}
void mergesort(int a[],int l,int r)
{
    if(l>=r)
    {
        return;
    }
    else
    {
        int mid;//=(l+r)/2;
        mid=l+(r-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);

        merge(a,l,mid,r);
    }
}
int main()
{
    int a[100];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout << endl<<endl;;

    mergesort(a,0,n-1);

    cout << "Sorted Array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
