#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(9);
    s.insert(8);
    s.insert(3);
    s.insert(6);
    s.insert(5);
    s.insert(2);
    s.insert(7);
    s.insert(4);
    cout << s.size() << endl;
    if (s.count(5) == 1)
    {
        cout << "find" << endl;
    }
    else
    {
        cout << "no find" << endl;
    }
    s.erase(5);
    if (s.count(5) == 1)
    {
        cout << "find" << endl;
    }
    else
    {
        cout << "no find" << endl;
    }
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}