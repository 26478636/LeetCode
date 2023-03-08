#include <iostream>
#include <cstring>

using namespace std;

int n;               // 节点
int m;               // 边数
int s;               // 起始点
int arr[1005][1005]; // 邻接矩阵

int main()
{
    // 初始化--边的权值
    memset(arr, 0x3F, sizeof(arr));
    cin >> n >> m >> s;
    // 节点--自己到自己为0
    for (int i = 1; i <= n; i++)
    {
        arr[i][i] = 0;
    }
    // 初始化--边的权值
    for (int i = 0; i < m; i++)
    {
        int h, w, v;
        cin >> h >> w >> v;
        // 无向图
        arr[h][w] = min(arr[h][w], v);
        arr[w][h] = min(arr[w][h], v);
    }
    // floyd
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
            }
        }
    }
    // 输出
    for (int i = 1; i <= n; i++)
    {
        if (arr[s][i] != 0x3F3F3F3F)
        {
            cout << arr[s][i] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}