#include<iostream>
#include<conio.h>
using namespace std;

int partition(int a[],int low,int high)
{
    int pivot = a[high],tmp;
    int i = low-1;

    for(int j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            //swap(a[i],a[j]);
            tmp  = a[j];
            a[j] = a[i];
            a[i] = tmp;
        }
    }

    //swap(a[i+1],a[high]);
    tmp    = a[high];
    a[high]   = a[i+1];
    a[i+1] = tmp;

    return i+1;
}

void quicksort(int a[],int low, int high)
{
    if(low<high)
    {
        int pivot;
        pivot=partition(a,low,high);

        quicksort(a,low,pivot-1);
        quicksort(a,pivot+1,high);
    }
    else
    {
        return;
    }
}

int main()
{
    int a[100];
    int n;
    cout << "Enter size of array: ";
    cin>>n;
    cout << "Enter "<<n<<" elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    quicksort(a,0,n-1);

    cout << "Sorted Array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout << a[i] << ' ';
    }

    getch();
    return 0;
}
