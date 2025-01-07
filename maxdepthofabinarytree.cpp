class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int leftsubtree = 1;
        int rightsubtree = 1;

        leftsubtree += maxDepth(root->left);
        rightsubtree += maxDepth(root->right);

        return max(leftsubtree, rightsubtree);
    }
};