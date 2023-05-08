// 迭代法
// 是利用栈进行遍历的
// 前序遍历
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
    vector<int> preorderTraversal(TreeNode *head)
    {
        stack<TreeNode *> sta;
        vector<int> res;
        if (head == nullptr)
            return res;
        sta.push(head);
        while (!sta.empty())
        {
            TreeNode *node = sta.top();
            sta.pop();
            res.push_back(node->val);
            if (node->right)
                sta.push(node->right);
            if (node->left)
                sta.push(node->left);
        }
        return res;
    }
};