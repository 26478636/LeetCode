#include <iostream>
#include <vector>

using namespace std;

// 二叉树
class TreeNode
{
public:
    int _val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : _val(val), left(NULL), right(NULL) {}
};

// 前序遍历函数
// 中序遍历函数
// 后序遍历函数
void front_order(TreeNode *root, vector<int> &result)
{
    if (root == NULL)
        return;
    result.push_back(root->_val);
    front_order(root->left, result);
    front_order(root->right, result);
}

// 输出前序遍历结果
// 中左右
// 传入一棵二叉树的首地址
vector<int> print(TreeNode *root)
{
    vector<int> result;
    // 往容器里传入遍历结果
    // 调用前序遍历函数
    front_order(root, result);
    return result;
}

int main()
{

    return 0;
}