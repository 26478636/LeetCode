#include <iostream>
#include <queue>

using namespace std;

struct node
{
    int x, y, z;
};

int main()
{
    queue<int> que1;
    que1.push(1);
    que1.push(3);
    que1.push(5);
    que1.push(7);
    que1.push(9);
    cout << que1.front() << " " << que1.size() << " " << que1.back() << endl;
    while (!que1.empty())
    {
        cout << que1.front() << " " << que1.back() << endl;
        que1.pop();
    }

    queue<node> que2;
    que2.push((node){1, 2, 3});
    que2.push((node){2, 3, 4});
    que2.push((node){3, 4, 5});
    que2.push((node){4, 5, 6});
    que2.push((node){5, 6, 7});
    cout << que2.front().x << " " << que2.size() << " " << que2.back().x << endl;
    while (!que2.empty())
    {
        cout << que2.front().x << " " << que2.back().x << endl;
        que2.pop();
    }
    return 0;
}