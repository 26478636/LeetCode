// 后序遍历 同 前序遍历基本上大差不差
#include <iostream>
#include <algorithm>
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
    vector<int> backorderTraversal(TreeNode *head)
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
            if (node->left)
                sta.push(node->left);
            if (node->right)
                sta.push(node->left);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};