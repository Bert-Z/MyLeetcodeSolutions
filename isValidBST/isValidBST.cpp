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
    vector<int> elem;
    bool isValidBST(TreeNode *root)
    {
        if (root)
        {
            inorder(root);
            for (int i = 0; i < elem.size() - 1; i++)
            {
                if (elem[i] >= elem[i + 1])
                {
                    return false;
                }
            }
            return true;
        }
        else
        {
            return true;
        }
    }

    void inorder(TreeNode *root)
    {
        if (root)
        {
            inorder(root->left);
            elem.push_back(root->val);
            inorder(root->right);
        }
    }
};