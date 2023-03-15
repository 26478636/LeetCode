#include <iostream>
#include <cstdio>

using namespace std;

int n, m, t, num[35][35];

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    scanf("%d", &t);
    int j = n - 1, k = 0;
    while ()
    {
        if (num[j][k] == 0)
        {
            cout << j << " " << k << endl;
            break;
            // return 0;
        }
        else if (num[j][k] < t)
        {
            k++;
        }
        else
        {
            j--;
        }
    }

    return 0;
}