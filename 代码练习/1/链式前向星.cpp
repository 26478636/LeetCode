#include <iostream>
#include <cstring>

using namespace std;

int n; // 节点数
int m; // 边数
int head[100005];

// 重新定义每一条边的参数
struct edge
{
    int e; // 终止点
    int v; // 权值
    int next;
};

edge edg[100005];

int main()
{
    cin >> n >> m;
    memset(head, -1, sizeof(head));
    // 传每一条边的输入
    for (int i = 0; i < m; i++)
    {
        int s, e, v;
        cin >> s >> e >> v;
        edg[i].e = e;
        edg[i].v = v;
        edg[i].next = head[s];
        head[s] = i;
    }
    // 输出
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int j = head[i]; j != -1; j = edg[j].next)
        {
            cout << "{ " << edg[j].e << ", " << edg[j].v << "} ";
        }
        cout << endl;
    }

    return 0;
}