#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    string S;
    S = "abcdefg";
    // cout << S << endl;
    for (int i = 0; i < S.size(); i++)
    {
        cout << S[i];
    }
    cout << endl;

    S[0] = 'A';
    cout << S << endl;
    cout << S.size() << " " << S.length() << endl;

    if (S.find("cd", 3) != string::npos)
    {
        cout << S.find("cd") << endl;
    }
    else
    {
        cout << "no find!!!!" << endl;
    }

    S.insert(2, "1212");
    cout << S << endl;

    string t = S.substr(2);
    cout << t << endl;

    S.replace(2, 4, "2323");
    cout << S << endl;

    sort(S.begin(), S.end());
    cout << S << endl;

    reverse(S.begin(), S.end());
    cout << S << endl;
    return 0;
}