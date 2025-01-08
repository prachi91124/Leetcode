class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        while (root != NULL)
        {
            if (p->val < root->val && q->val < root->val)
            {
                root = root->left;
            }
            else if (p->val > root->val && q->val > root->val)
            {
                root = root->right;
            }
            else if ((p->val < root->val && q->val > root->val) || (p->val > root->val && q->val < root->val))
            {
                return root;
            }
            else if (root == p || root == q)
            {
                return root;
            }
        }
        return NULL;
    }
};