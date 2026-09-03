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

    void find(TreeNode* root, int value, vector<TreeNode*>& v) {
        if (!root) return;
        if (root->val == value) v.push_back(root);
        find(root->left, value, v);
        find(root->right, value, v);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector<TreeNode*> v;
        find(root, subRoot->val, v);
        if (v.empty()) return false;
        for (auto& ptr : v) {
            if (isSameTree(ptr, subRoot)) return true;
        }
        return false;
    }
};
