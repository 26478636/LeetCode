#include <iostream>
#include <queue>
// 大顶堆

using namespace std;

struct node
{
    int x, y, z;
    bool operator<(const node &b) const
    {
        return this->x < b.x;
    }
};

int main()
{
    priority_queue<node> que;
    que.push((node){7, 2, 3});
    que.push((node){8, 3, 4});
    que.push((node){6, 4, 5});
    que.push((node){3, 5, 6});
    que.push((node){1, 6, 7});
    cout << que.size() << endl;

    while (!que.empty())
    {
        cout << que.top().x << " " << que.top().y << " " << que.top().z << endl;
        que.pop();
    }

    return 0;
}