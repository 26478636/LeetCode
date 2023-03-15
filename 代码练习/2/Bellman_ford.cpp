#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

struct edge
{
    int s, v, e;
};

int n, m, s, ans[100005];

edge edg[200005];
int edg_count;

// 插入
void add_insert(int a, int b, int c)
{
    edg[edg_count].s = a;
    edg[edg_count].v = b;
    edg[edg_count].e = c;
    edg_count++;
}

int main()
{
    memset(ans, 0x3f, sizeof(ans));
    scanf("%d%d%d", &n, &m, &s);
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        add_insert(a, b, c);
        add_insert(c, b, a);
    }
    return 0;
}