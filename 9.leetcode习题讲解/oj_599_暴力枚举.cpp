#include <iostream>

using namespace std;

int n;
int t;
int num[1000005];

int main()
{
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] + num[j] == t)
            {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    return 0;
}