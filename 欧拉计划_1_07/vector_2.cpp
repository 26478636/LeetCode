// 二维数组
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> v(5, vector<int>(6, 12));
    vector<int> v1(6, 34);
    v.push_back(v1);
    v.push_back(v1);

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}