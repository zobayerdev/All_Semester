#include<iostream>
using namespace std;
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
            end--;
        }
        if(start<end)
        {
            swap(a[start],a[end]);
        }
    }
    swap(a[low],a[end]);
    return end;
}
void quick(int a[],int low, int high)
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
    int a[100];
    int n,i;
    cout << "Enter size of array: ";
    cin>>n;
    cout << "Enter "<<n<<" Element:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quick(a,0,n-1);
    cout << "Sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}
