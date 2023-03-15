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
    int head = 0, tail = n - 1;
    while (head < tail)
    {
        if (num[head] + num[tail] == t)
        {
            cout << head << " " << tail << endl;
            return 0;
        }
        else if (num[head] + num[tail] < t)
        {
            head++;
        }
        else
        {
            tail--;
        }
    }
    return 0;
}