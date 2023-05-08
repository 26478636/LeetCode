// 中序遍历
// 重要呀！！！！！！！！！！！！
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
    // 构造函数
    TreeNode(int _val) : val(_val), left(nullptr), right(nullptr) {}
};

class solution
{
public:
    // 迭代法 中序遍历 特殊之处
    vector<int> midorderTraversal(TreeNode *head)
    {
        stack<TreeNode *> sta;
        vector<int> res;
        TreeNode *cur = head;
        while (cur != nullptr || !sta.empty())
        {
            if (cur != nullptr)
            {
                sta.push(cur);
                cur = cur->left;
            }
            else
            {
                cur = sta.top();
                sta.pop();
                res.push_back(cur->val);
                cur = cur->right;
            }
        }
        return res;
    }
};