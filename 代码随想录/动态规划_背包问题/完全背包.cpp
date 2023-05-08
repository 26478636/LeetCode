#include <iostream>
#include <vector>
// 一维数组
using namespace std;

void bei_bao()
{
    vector<int> weight = {1, 3, 4};
    vector<int> value = {15, 20, 30};
    int bei_weight = 4;
    // 初始化
    vector<int> dp(bei_weight + 1, 0);
    // 每件物品有无限个
    for (int i = 0; i < weight.size(); i++)
    {
        for (int j = weight[i]; j <= bei_weight; j++)
        {
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
    cout << dp[bei_weight] << endl;
}

int main()
{
    bei_bao();
    return 0;
}