class Solution
{
public:
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == NULL)
            return NULL;

        if (key < root->val)
        {
            root->left = deleteNode(root->left, key);
        }
        else if (key > root->val)
        {
            root->right = deleteNode(root->right, key);
        }
        else
        {
            if (root->left == NULL && root->right == NULL)
            {
                return NULL;
            }
            else if (root->left == NULL)
            {
                return root->right;
            }
            else if (root->right == NULL)
            {
                return root->left;
            }
            else
            {
                int minVal = getMinVal(root->right);
                root->val = minVal;
                root->right = deleteNode(root->right, minVal);
            }
        }
        return root;
    }

    int getMinVal(TreeNode *root)
    {
        while (root && root->left)
        {
            root = root->left;
        }

        return root->val;
    }
};