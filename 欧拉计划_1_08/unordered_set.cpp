#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(45);
    s.insert(15);
    s.insert(20);
    s.insert(7);
    s.insert(36);
    cout << s.size() << endl;
    if (s.find(1) != s.end())
    {
        cout << "find" << endl;
    }
    s.erase(1);
    if (s.count(1) == 1)
    {
        cout << "find" << endl;
    }
    else
    {
        cout << "no find" << endl;
    }
    cout << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}