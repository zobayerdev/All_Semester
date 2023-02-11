#include <iostream>
using namespace std;

int deletearray(int arr[], int k, int i, int m)
{
    cout << "Enter the position you want to delete an element: ";
    cin >> m;

    if(m >= k+1)
        cout << "Error" << endl;
    else
        for(i = m-1; i < k-1; i++)
            arr[i] = arr[i+1];

    cout << "Your Array Result is: " << endl;
    for (i = 0; i < k-1 ; i++)
        cout << arr[i] << endl;
}
int main()
{
    int arr[100], i, k, m;
    cout << "Enter number of elements in array: ";
    cin >> k;
    cout << "Enter the " << k << " elements:" << endl;
        for (i = 0; i < k; i++)
        cin >> arr[i];
    deletearray(arr, k, i, m);
}
