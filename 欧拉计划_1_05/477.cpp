#include <iostream>
using namespace std;

int main()
{
    char num[100];
    cin >> num;
    int ans;
    int mediate = -1;
    for (int i = 0; num[i]; i++)
    {
        if (num[i] == 'A' || num[i] == 'E' || num[i] == 'O' || num[i] == 'U' || num[i] == 'I')
        {
            if (mediate != -1)
            {
                ans = max(ans, i - mediate);
            }
            mediate = i;
        }
    }
    cout << ans << endl;
    return 0;
}