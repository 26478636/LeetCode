#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> good, mmax;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            cin >> a;
            good.push(a);
            if (a > mmax.top() || mmax.empty())
            {
                mmax.push(a);
            }
            else
            {
                mmax.push(mmax.top());
            }
        }
        else if (a == 1)
        {
            if (!good.empty())
            {
                good.pop();
                mmax.pop();
            }
        }
        else
        {
            if (good.empty())
            {
                cout << "00" << endl;
            }
            else
            {
                cout << mmax.top() << endl;
            }
        }
    }

    return 0;
}