#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    // // 如何进行扩容
    // int temp = -1;
    // for (int i = 0; i < 100; i++)
    // {
    //     if (temp != v.capacity())
    //     {
    //         temp = v.capacity();
    //         cout << v.capacity() << endl;
    //     }
    //     v.push_back(i);
    // }
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v[2] = 0;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}