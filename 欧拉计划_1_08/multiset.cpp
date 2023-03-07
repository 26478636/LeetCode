#include <iostream>
#include <map>
#include <utility>
#include <cstring>

using namespace std;

int main()
{
    multimap<int, string> m1;
    m1.insert(make_pair(123, "nkm"));
    m1.insert(make_pair(123, "bjh"));
    m1.insert(make_pair(123, "fgc"));
    m1.insert(make_pair(123, "uoj"));
    m1.insert(make_pair(123, "bjh"));
    cout << m1.size() << endl;
    for (auto it = m1.begin(); it != m1.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}