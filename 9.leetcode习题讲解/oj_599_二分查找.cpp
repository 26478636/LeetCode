#include <iostream>

using namespace std;

int n, t, num[1000005];

int main()
{
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int l = 0, r = n - 1;
    while (l < r)
    {
        int middle = t - num[l];
    }
    return 0;
}