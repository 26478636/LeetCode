#include <iostream>
#include <vector>

using namespace std;

// 背包
void bei_bao()
{
    vector<int> weight = {1, 3, 4};
    vector<int> value = {15, 20, 30};
    int bei_weight = 4;
    // 初始化
    vector<int> dp(bei_weight + 1, 0);
    for (int i = 0; i < weight.size(); i++)
    {
        for (int j = bei_weight; j > 0; j--)
        {
            if (weight[i] > j)
            {
                dp[j] = dp[j];
            }
            else
            {
                dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
            }
        }
    }
    cout << dp[bei_weight] << endl;
}

int main()
{
    bei_bao();
    return 0;
}