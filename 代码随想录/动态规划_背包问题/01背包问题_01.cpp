#include <iostream>
#include <vector>

using namespace std;

// 背包
void bei_bao()
{
    vector<int> weight = {1, 3, 4};
    vector<int> value = {15, 20, 30};
    int beibao_weight = 4;
    // 初始化
    vector<vector<int>> dp(weight.size(), vector<int>(beibao_weight + 1, 0));
    for (int i = weight[0]; i < beibao_weight + 1; i++)
    {
        dp[0][i] = value[0];
    }
    // 递推公式
    for (int i = 1; i < weight.size(); i++)
    {
        for (int j = 1; j < beibao_weight + 1; j++)
        {
            if (weight[i] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
            }
        }
    }
    cout << dp[weight.size() - 1][beibao_weight] << endl;
}

int main()
{
    bei_bao();
    return 0;
}