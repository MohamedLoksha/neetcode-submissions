/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void isSame(TreeNode* p, TreeNode* q, bool& flag) {
        if (!p || !q) {
            if (!p && !q) return;
            flag = false;
            return;
        }

        if (p->val != q->val) {
            flag = false;
            return;
        }

        isSame(p->left, q->left, flag);
        isSame(p->right, q->right, flag);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool flag = true;
        isSame(p, q, flag);
        return flag;
    }
};