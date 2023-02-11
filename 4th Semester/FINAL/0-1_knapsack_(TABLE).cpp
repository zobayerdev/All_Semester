#include <bits\stdc++.h>
using namespace std;

/*int max(int a, int b)
{
    return (a > b) ? a : b;
}*/

int knapsack(int size, int wt[], int val[], int n)
{
    int i, j;
    int p[n + 1][size + 1];  /// eikhane table e ja row/column lagbe tr ceye akta besi nibo.
    for (i = 0; i <= n; i++) ///n er soman pojonto
    {
        for (j = 0; j <= size; j++) ///COLUM
        {
            if (i == 0 || j == 0) /// jodi row & colum 0 hoy tahole 0 bosabo;
            {
                p[i][j] = 0; /// tahole first colum and row 0 thakbe
            }
            else if (wt[i - 1] <= j) /// wt[i-1] = 0 <= j ; false
            {
                p[i][j] = max(val[i - 1] + p[i - 1][j - wt[i - 1]], p[i - 1][j]);

                /// p = 2, 2 = max (val[2-1]+p[2-1][2-wt[2-1]], p[2-1] [2] );
                                 ///= max(val[1]+p[1][2-wt[1]], p[1][2]);
                                /// = max(4++p[1][2-12],

             /// B[i,w] = max(B[i-1] ,w], B{i-1, w-w[i]]+v[i])
             ///
            }
            else
            {
                p[i][j] = p[i - 1][j]; /// i =1 , j=1 =
            }
            cout << p[i][j] << "  ";
        }
        cout << endl;
    }
    return p[n][size];
}

int main()
{
    int obj[] = {1, 2, 3, 4, 5} ; /// obj or item ;
    int wt[] = {12, 2, 4, 1, 1}; /// object weight;
    int p[] = {4, 2, 10, 2, 1}; /// profit


    int size = 20; /// size of bag

    int n = sizeof(p) / sizeof(p[0]); ///ARRAY ER SIZE
    int maximum = knapsack(size, wt, p, n);
    cout << "\nMax Profit: " << maximum;
    return 0;
}
