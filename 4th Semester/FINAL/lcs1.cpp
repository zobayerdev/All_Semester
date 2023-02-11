#include <bits\stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int i = 0, j = 0;
    int adj[100][100];
    char x[100] = "AAGCAATG";
    char y[100] = "AACGC";

    adj[0][0] = 0;

    int len_x = strlen(x);
    int len_y = strlen(y);

    for (i = 1; i <= len_y; i++)
    {
        for (j = 1; j <= len_x; j++)
        {
            if (y[i] == x[j])
            {
                adj[i][j] = 1 + adj[i - 1][j - 1];
            }
            else
            {
                adj[i][j] = max(adj[i][j - 1], adj[i - 1][j]);
            }
        }
    }
    int k, l;
    for (k = 0; k <= len_y; k++)
    {
        for (l = 0; l <= len_x; l++)
        {
            cout << adj[k][l] << " ";
        }
        cout << endl;
    }
    cout << "Length of LCS is: " << adj[i - 1][j - 1] << endl;
    return 0;
} //AACG