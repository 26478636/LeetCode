// 中序遍历
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
    // 递归函数
    void traversal(TreeNode *node, vector<int> &res)
    {
        // 终止条件
        if (node == nullptr)
            return;
        // 递归函数
        traversal(node->left, res);
        traversal(node->right, res);
    }
    // 相当于主函数
    vector<int> midorderTraversal(TreeNode *head)
    {
        vector<int> res;
        traversal(head, res);
        return res;
    }
};