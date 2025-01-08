class Solution
{
public:
    int maxHeight(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int leftht = 1;
        int rightht = 1;

        leftht += maxHeight(root->left);
        rightht += maxHeight(root->right);

        return max(leftht, rightht);
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        return diameter(root) - 1;
    }
    int diameter(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int leftht = maxHeight(root->left);
        int rightht = maxHeight(root->right);

        int op1 = 1 + leftht + rightht;
        int op2 = diameter(root->left);
        int op3 = diameter(root->right);

        return max(op1, max(op2, op3));
    }
};