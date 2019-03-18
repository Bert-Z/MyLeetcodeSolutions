/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include <queue>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
  public:
    int maxDepth(TreeNode *root)
    {
        int stepnum = 0;
        if (root == NULL)
            return stepnum;
        queue<TreeNode *> step;
        queue<queue<TreeNode *>> BFSqueue;

        step.push(root);
        BFSqueue.push(step);

        while (!BFSqueue.empty())
        {
            stepnum++;
            queue<TreeNode *> thisstep = BFSqueue.front();
            BFSqueue.pop();

            queue<TreeNode *> nextstep;
            while (!thisstep.empty())
            {
                if (thisstep.front()->left)
                {
                    nextstep.push(thisstep.front()->left);
                }
                if (thisstep.front()->right)
                {
                    nextstep.push(thisstep.front()->right);
                }
                thisstep.pop();
            }
            if (!nextstep.empty())
                BFSqueue.push(nextstep);
        }

        return stepnum;
    }
};