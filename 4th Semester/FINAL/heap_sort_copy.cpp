#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
    //Find among root, left child and right child
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest])
    {
        largest=left;
    }

    if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }

    //Swap and continue heapifying if root is not largest
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n)
{
    //Build max heap
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }

    //Heap sort
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        //Heapify root element to get highest element at root again
        heapify(arr,i,0);
    }
}
int main()
{
    int arr[]={8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);

    cout<< "Sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}
