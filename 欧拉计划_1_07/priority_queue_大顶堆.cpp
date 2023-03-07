#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, less<int>> que;
    que.push(1);
    que.push(0);
    que.push(6);
    que.push(9);
    que.push(11);
    cout << que.size() << endl;
    cout << endl;

    while (!que.empty())
    {
        cout << que.top() << endl;
        que.pop();
    }
    return 0;
}