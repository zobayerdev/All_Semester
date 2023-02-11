#include<iostream>
using namespace std;
int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return 2*i-1;
}
int parent(int i)
{
    return i/2;
}
void max_heapify(int heap[],int heap_size,int i)
{
    int l,r,large,tmp;
    l=left(i);
    r=right(i);
    if(l<=heap_size && heap[l]>heap[i])
    {
        large=l;
    }
    else
    {
        large=i;
    }

    if(r<=heap_size && heap[r]>heap[large])
    {
        large=r;
    }

    if(large!=i)
    {
        tmp=heap[i];
        heap[i]=heap[large];
        heap[large]=tmp;
        max_heapify(heap,heap_size,large);
    }
}
void build_max_heap(int heap[],int heap_size)
{
    int i;
    for(i=heap_size/2;i>=1;i--)
    {
        max_heapify(heap,heap_size,i);
    }
}
void heap_sort(int heap[],int heap_size)
{
    int i,tmp;
    for(i=heap_size;i>1;i--)
    {
        tmp=heap[1];
        heap[1]=heap[i];
        heap[i]=tmp;

        heap_size -= 1;
        max_heapify(heap,heap_size,1);
    }
}
int main()
{
    int arr[]={8,7,6,5,4};
    int i;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << "Size of array: "<<n<<endl;
    heap_sort(arr,n);
    cout<< "Sorted Array:"<<endl;
    for(i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
}
