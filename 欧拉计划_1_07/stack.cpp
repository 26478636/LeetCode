#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);
    s.push(9);
    s.push(11);
    cout << s.size() << " " << s.top() << endl;

    // 遍历
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}