// 递归的三要素
// (确定递归函数的参数和返回值)
// (确定终止条件)
// (确定单层递归的逻辑)

// 前序遍历
#include <iostream>
#include <vector>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int _val) : val(_val), left(nullptr), right(nullptr) {} // 构造函数
};

class solution
{
public:
    // 递归函数
    void traversal(TreeNode *node, vector<int> &res)
    {
        // 终止条件
        if (node == nullptr)
            return;
        // 递归函数
        res.push_back(node->val);
        traversal(node->left, res);
        traversal(node->right, res);
    }
    // 相当于主函数的功能
    vector<int> preorderTraversal(TreeNode *head)
    {
        vector<int> res;
        traversal(head, res);
        return res;
    }
};