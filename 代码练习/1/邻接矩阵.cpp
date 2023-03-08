// 邻接矩阵
#include <iostream>
#include <cstring>

using namespace std;

int m;             // 节点
int n;             // 边数
int arr[105][105]; // 邻接矩阵

int main()
{
    cin >> m >> n;
    // 边的权值--初始化的过程
    memset(arr, 0x3F, sizeof(arr));
    // 输入边的权值
    for (int i = 0; i < n; i++)
    {
        int s; // 起始点
        int e; // 终止点
        int v; // 边的权值
        cin >> s >> e >> v;
        // 输入权值--输入的是最短路径
        // 所以需要一个初始化的过程
        arr[s][e] = min(arr[s][e], v);
    }
    // 输出邻接矩阵
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] != 0x3F3F3F3F)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}