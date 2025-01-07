class Solution
{
public:
    int htofBinaryTree(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int leftST = 1;
        int rightST = 1;

        leftST += htofBinaryTree(root->left);
        rightST += htofBinaryTree(root->right);

        return max(leftST, rightST);
    }
    bool isBalanced(TreeNode *root)
    {
        if (root == NULL)
        {
            return true;
        }

        int leftST = htofBinaryTree(root->left);
        int rightST = htofBinaryTree(root->right);

        if (abs(leftST - rightST) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};
