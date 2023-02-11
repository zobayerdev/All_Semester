#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int my_max(int a, int b)
{
    return (a >= b) ? a : b;
}

vector<vector<int>> lcs_length(string X, string Y)
{
    int m = X.size();
    int n = Y.size();
    vector<vector<int>> c(m + 1);
    for (int i = 0; i <= m; i++)
    {
        c[i].resize(n + 1);
    }
    for (int i = 1; i <= m; i++)
    {
        c[i][0] = 0;
    }
    for (int j = 1; j <= n; j++)
    {
        c[0][j] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            /* Note the index corresponding to X and Y */
            if (X[i - 1] == Y[j - 1])
            {
                c[i][j] = c[i - 1][j - 1] + 1;
            }
            else
            {
                c[i][j] = my_max(c[i][j - 1], c[i - 1][j]);
            }
        }
    }

    return c;
}

void print_lcs(string X, vector<vector<int>> c, int i, int j)
{
    if (c[i][j] == 0)
    {
        return;
    }

    if (c[i - 1][j] == c[i][j])
    {
        print_lcs(X, c, i - 1, j);
    }
    else if (c[i][j - 1] == c[i][j])
    {
        print_lcs(X, c, i, j - 1);
    }
    else
    {
        print_lcs(X, c, i - 1, j - 1);
        cout << X[i - 1];
    }
}

int main()
{
    string X;
    string Y;
    cin >> X;
    cin >> Y;
    int m = X.size();
    int n = Y.size();
    vector<vector<int>> c = lcs_length(X, Y);

    cout << c[m][n] << endl;
    print_lcs(X, c, m, n);
}