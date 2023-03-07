#include <iostream>
#include <set>

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
    set<node> s;
    s.insert((node){8, 2, 3});
    s.insert((node){2, 2, 3});
    s.insert((node){4, 2, 3});
    s.insert((node){3, 2, 3});
    s.insert((node){9, 2, 3});
    cout << s.size() << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << it->x << " " << it->y << " " << it->z << endl;
    }
    if (s.count((node){2, 2, 3}) == 1)
    {
        cout << "find" << endl;
    }
    else
    {
        cout << "no find" << endl;
    }
    s.erase((node){2, 2, 3});
    if (s.count((node){2, 2, 3}) == 1)
    {
        cout << "find" << endl;
    }
    else
    {
        cout << "no find" << endl;
    }
    return 0;
}