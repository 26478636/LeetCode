#include <iostream>
#include <algorithm>

using namespace std;

// 半径
int r;
// 每一局的积分
int score[15][2];
// 最终甲乙的得分
int ans_1, ans_2;

// 输出函数
void print(int n)
{
    // 进行到第n局结束
    for (int i = 0; i < n; i++)
    {
        cout << score[i][0] << ":" << score[i][1] << endl;
        ans_1 += score[i][0];
        ans_2 += score[i][1];
    }
    cout << ans_1 << ":" << ans_2 << endl;
}

int main()
{
    // 输入半径
    cin >> r;
    // 输入甲乙每一局的赛况
    for (int i = 0; i < 10; i++)
    {
        // 每一局的赛况
        // 这个定义在全局区就是不行
        int num1[10], num2[10];
        for (int j = 0; j < 8; j++)
        {
            cin >> num1[j];
            if (num1[j] == -1)
            {
                print(i);
                return 0;
            }
        }
        for (int j = 0; j < 8; j++)
        {
            cin >> num2[j];
        }
        sort(num1, num1 + 8);
        sort(num2, num2 + 8);
        if (num1[0] < num2[0])
        {
            for (int j = 0; j < 8; j++)
            {
                // num1[j]>=num2[0]，是不是没想到
                if (num1[j] > r || num1[j] >= num2[0])
                {
                    break;
                }
                score[i][0]++;
            }
        }
        else
        {
            for (int j = 0; j < 8; j++)
            {
                if (num2[j] > r || num2[j] >= num1[0])
                {
                    break;
                }
                score[i][1]++;
            }
        }
    }
    print(10);
    return 0;
}