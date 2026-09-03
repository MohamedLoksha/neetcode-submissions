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
    // دالة المقارنة المباشرة
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;  // الاتنين Null
        if (!p || !q) return false; // واحد Null والتاني لأ
        if (p->val != q->val) return false; // القيم مختلفة
        
        // مقارنة الشمال بالكمال واليمين باليمين (لو واحد طلع false بيوقف على طول)
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;
        
        // 1. جرب تقارن من الـ Node الحالي
        if (isSameTree(root, subRoot)) return true;
        
        // 2. لو منفعش، جرب كمل بحث في الشمال أو اليمين
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
