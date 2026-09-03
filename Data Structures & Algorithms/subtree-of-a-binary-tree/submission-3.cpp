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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // لو الاثنين null يبقى متطابقين
        if (!p && !q) return true;
        
        // لو واحد null والثاني موجود يبقى غير متطابقين
        if (!p || !q) return false;
        
        // لو القيم مختلفة
        if (p->val != q->val) return false;
        
        // قارن الفرع الشمال بالشمال واليمين باليمين
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // الشجرة الفارغة تعتبر Subtree من أي حاجة
        if (!subRoot) return true;
        
        // لو الشجرة الأصلية خلصت و subRoot لسه فيه عناصر
        if (!root) return false;
        
        // 1. جرب تقارن من الـ Node الحالي
        if (isSameTree(root, subRoot)) return true;
        
        // 2. كمل بحث في الفرع الشمال أو اليمين
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
