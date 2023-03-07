// 存储自定义类型的结构体
#include <iostream>
#include <vector>

using namespace std;

struct node
{
    int x, y, z;
};

int main()
{
    vector<node> v;
    v.push_back((node){1, 2, 3});
    v.push_back((node){1, 2, 3});
    v.push_back((node){1, 2, 3});
    v.push_back((node){1, 2, 3});
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].x << " " << v[i].y << " " << v[i].z << endl;
    }
    return 0;
}