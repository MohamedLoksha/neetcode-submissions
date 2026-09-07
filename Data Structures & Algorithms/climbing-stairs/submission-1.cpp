class Solution {
public:
    int climbStairs(int n) {
        // لو السلم درجة أو درجتين، عدد الطرق هو نفس عدد الدرجات
        if (n <= 2) {
            return n;
        }
        
        int prev2 = 1; // بتمثل dp[1]
        int prev1 = 2; // بتمثل dp[2]
        int current = 0;
        
        // هنبدأ من الدرجة التالتة لحد n
        for (int i = 3; i <= n; i++) {
            current = prev1 + prev2; // مجموع الخطوتين اللي فاتو
            
            // بنعمل Shift للقيم عشان اللفة الجاية
            prev2 = prev1; 
            prev1 = current;
        }
        
        return current;
    }
};