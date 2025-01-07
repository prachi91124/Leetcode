class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        int mxlvl = -1;
        vector<int> ans;

        f(root, 0, mxlvl, ans);
        return ans;
    }

    void f(TreeNode *root, int currlvl, int &mxlvl, vector<int> &ans)
    {
        // base case
        if (root == NULL)
            return;

        if (currlvl > mxlvl)
        {
            ans.push_back(root->val);
            mxlvl = currlvl;
        }

        f(root->right, currlvl + 1, mxlvl, ans);
        f(root->left, currlvl + 1, mxlvl, ans);
    }
};