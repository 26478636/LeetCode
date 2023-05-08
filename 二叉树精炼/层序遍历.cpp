// 层序遍历
// 是利用队列进行遍历的
// 每一层进行遍历的
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

class solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *head)
    {
        queue<TreeNode *> que;
        vector<vector<int>> res;
        if (head == nullptr)
            return res;
        else
            que.push(head);
        while (!que.empty())
        {
            int size = que.size();
            vector<int> path;
            for (int i = 0; i < size; i++)
            {
                TreeNode *cur = que.front();
                que.pop();
                path.push_back(cur->val);
                if (cur->left)
                    que.push(cur->left);
                if (cur->right)
                    que.push(cur->right);
            }
            res.push_back(path);
        }
        return res;
    }
};