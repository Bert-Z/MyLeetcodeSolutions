/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#include <vector>
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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> all;
        vector<int> stepint;
        vector<TreeNode *> step;
        vector<vector<TreeNode *>> BFS;

        if (!root)
        {
            return all;
        }

        step.push_back(root);
        stepint.push_back(root->val);
        all.push_back(stepint);
        BFS.push_back(step);

        while (!BFS.empty())
        {
            vector<TreeNode *> thisstep = BFS[0];
            BFS.pop_back();

            vector<TreeNode *> nextstep;
            while (!thisstep.empty())
            {
                if (thisstep[0]->left)
                {
                    nextstep.push_back(thisstep[0]->left);
                }
                if (thisstep[0]->right)
                {
                    nextstep.push_back(thisstep[0]->right);
                }
                thisstep.erase(thisstep.begin());
            }
            if (!nextstep.empty())
            {
                BFS.push_back(nextstep);

                stepint.clear();
                for (auto item : nextstep)
                {
                    stepint.push_back(item->val);
                }
                all.push_back(stepint);
            }
        }
        return all;
    }
};