#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int n; // 节点数
int m; // 边数

int main()
{
    cin >> n >> m;
    // 初始化邻接表
    vector<vector<pair<int, int>>> edge(n + 1, vector<pair<int, int>>{});
    // 输入边的信息(权值)
    for (int i = 0; i < m; i++)
    {
        int s, e, v;
        cin >> s >> e >> v;
        // 为什么初始化表，要格外开一个
        edge[s].push_back(make_pair(e, v));
    }
    // 输出
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": ";
        for (int j = 0; j < edge[i].size(); j++)
        {
            cout << "{" << edge[i][j].first << "," << edge[i][j].second << "}";
        }
        cout << endl;
    }
    return 0;
}