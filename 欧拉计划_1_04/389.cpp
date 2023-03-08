#include <iostream>
#include <algorithm>

using namespace std;

int n;         // 工位个数
int m;         // 待安排的程序员的个数
int num[1005]; // 工位讯息

// 计算安排程序员个数
int func(int x)
{
    int count = 1; // 一定可以排进去一个
    int distance1 = num[0];
    for (int i = 1; i < n; i++)
    {
        if (num[i] - distance1 >= x)
        {
            count++;
            distance1 = num[i];
        }
    }
    return count;
}

// 二分查找函数
int fb()
{
    int l = 1, r = num[n - 1] - num[0];
    while (l != r)
    {
        int mid = (l + r + 1) / 2;
        // 安排程序员个数
        int s = func(mid);
        if (s >= m)
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    return r;
}

int main()
{
    cin >> n >> m;
    // 工位讯息
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    // 排序
    sort(num, num + n);
    // 调用二分查找函数
    cout << fb() << endl;
    return 0;
}