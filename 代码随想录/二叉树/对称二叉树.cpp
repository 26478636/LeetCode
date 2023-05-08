// 迭代法
// 使用双端队列的话deque
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution
{
public:
    bool isSymmetric(TreeNode *root)
    {
        deque<TreeNode *> dq;
        if (root != nullptr)
        {
            dq.push_front(root->left);
            dq.push_back(root->right);
        }
        while (!dq.empty())
        {
            int size = dq.size();
            TreeNode *left_tree;
            TreeNode *right_tree;
            while (size -= 2)
            {
                left_tree = dq.front();
                dq.pop_front();
                right_tree = dq.back();
                dq.pop_back();
                if (left_tree == nullptr && right_tree != nullptr)
                    return false;
                if (left_tree != nullptr && right_tree == nullptr)
                    return false;
                if (left_tree->val != right_tree->val)
                    return false;
            }
        }
        return true;
    }
};

int main()
{

    return 0;
}