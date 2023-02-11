#include <iostream>
using namespace std;

int insertarray(int arr[], int k, int i, int m, int o)
{
    cout << "\nEnter the position you want to insert an element: ";
    cin >> m;
    cout << "Insert the value what You Want : ";
    cin >> o;
    for (i = k- 1; i >= m - 1; i--)
        arr[i+1] = arr[i];

    arr[m-1] = o; //

    cout << "Your array Result is: " << endl;
    for (i = 0; i <= k; i++)
        cout << arr[i] << endl;
}
int main()
{
    int arr[100], k, m, o, i;
    cout << "Enter the number of elements in the array: ";
    cin >> k;
    cout << "Enter the " << k << " elements:" << endl;
        for (i = 0; i < k; i++)
        cin >> arr[i];

    insertarray(arr, k, i, m, o);
}
