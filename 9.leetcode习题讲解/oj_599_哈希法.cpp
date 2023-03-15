#include <iostream>
#include <unordered_map>

using namespace std;

int n, t, num[1000005];
unordered_map<int, int> my_map;

int main()
{
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        my_map[num[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        int middle = t - num[i];
        if (my_map.count(middle) == 1)
        {
            cout << i << " " << my_map[middle] << endl;
            return 0;
        }
    }

    return 0;
}