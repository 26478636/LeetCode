#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_front(5);
    dq.push_back(6);
    dq.push_front(7);
    dq.push_back(8);
    dq.push_front(9);
    dq.push_back(10);
    cout << dq.size() << " " << dq.front() << " " << dq.back() << endl;

    int t = 0;
    while (!dq.empty())
    {
        if (t % 2 == 0)
        {
            cout << dq.front() << " " << dq.back() << endl;
            dq.pop_front();
        }
        else
        {
            cout << dq.front() << " " << dq.back() << endl;
            dq.pop_back();
        }
        t++;
    }

    return 0;
}