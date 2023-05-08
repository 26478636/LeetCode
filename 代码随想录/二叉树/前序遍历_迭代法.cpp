#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
};

// 前序遍历  &&  迭代法  &&  栈
class Solution
{
public:
    vector<int> front_order(TreeNode *root)
    {
        vector<int> result;
        stack<TreeNode *> sta;
        if (root == nullptr)
            return result;
        sta.push(root);
        while (!sta.empty())
        {
            TreeNode *node = sta.top();
            sta.pop();
            result.push_back(node->val);
        }
    }
};

int main()
{

    return 0;
}