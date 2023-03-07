#include <iostream>
#include <map>
#include <cstring>
#include <utility> //make_pair

using namespace std;

int main()
{
    map<int, string> m1;
    m1.insert(make_pair(33, "12nc"));
    m1.insert(make_pair(2, "fgs"));
    m1.insert(make_pair(64, "vds"));
    m1.insert(make_pair(78, "vfdsv"));
    m1.insert(make_pair(23, "cds"));
    m1.insert(make_pair(5, "agvd"));
    m1[23] = "lhf";
    m1[45] = "afres";
    m1[65] = "vaf";
    m1[54] = "422fd";
    if (m1.count(23) == 1)
    {
        cout << "find" << endl;
    }
    else
    {
        cout << "no find" << endl;
    }
    m1.erase(65);
    if (m1.count(65) == 1)
    {
        cout << "find" << endl;
    }
    else
    {
        cout << "no find" << endl;
    }
    for (auto it = m1.begin(); it != m1.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}