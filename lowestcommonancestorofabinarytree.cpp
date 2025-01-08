class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        TreeNode *lca = NULL;
        f(root, p, q, lca);
        return lca;
    }

    bool f(TreeNode *root, TreeNode *p, TreeNode *q, TreeNode *&lca)
    {
        if (!root)
            return false;

        bool l = f(root->left, p, q, lca);
        bool r = f(root->right, p, q, lca);

        if (l && r)
        {
            lca = root;
            return true;
        }
        if ((root == p && (l || r)) || (root == q && (l || r)))
        {
            lca = root;
            return true;
        }
        if (root == p || root == q)
        {
            return true;
        }
        return l || r;
    }
};