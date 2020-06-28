class Solution {
private:
    void traverse(TreeNode *root, long num, long &ans)
    {
        if(!root)
            return;
        num = root->val + num * 10; // Calculate the number formed so far.
        if(root->left == NULL && root->right == NULL) // Leaf node condition
        {
            ans += num;
            return;
        }

        traverse(root->left, num, ans);
        traverse(root->right, num, ans);
    }
public:
    int sumNumbers(TreeNode* root) {

        long ans = 0;
        traverse(root, 0, ans);
        return ans;
    }
};
