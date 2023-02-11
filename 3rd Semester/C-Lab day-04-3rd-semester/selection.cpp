#include<iostream>
using namespace std;
void selection(int array[], int n, int i)
{
    int j, pos, swap;
    for(i = 0; i < n - 1; i++)
    {
        pos=i;
        for(j = i + 1; j < n; j++)
        {
            if(array[pos] > array[j])
                pos=j;
        }
            swap=array[i];
            array[i]=array[pos];
            array[pos]=swap;

    }
    cout << "Sorted Array:";
    for(i = 0; i < n; i++)
        cout << array[i] << endl;
}

int main()
{
    int i, n, array[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "\nEnter the " << n << " integers: " << endl;
    for(i = 0; i < n; i++)
        cin >> array[i];
    selection(array, n, i);

}
