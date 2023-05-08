// 后序遍历
#include <iostream>
#include <vector>

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
    // 构造函数
    void traversal(TreeNode *node, vector<int> &res)
    {
        // 判断终止条件
        if (node == nullptr)
            return;
        // 构造函数
        traversal(node->left, res);
        traversal(node->right, res);
        res.push_back(node->val);
    }
    // 相当于主函数
    vector<int> backorderTranversal(TreeNode *head)
    {
        vector<int> res;
        traversal(head, res);
        return res;
    }
};