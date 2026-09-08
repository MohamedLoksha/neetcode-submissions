class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        int sumSQ{};
        while (n != 1){
            sumSQ = 0;
            while (n != 0) {
                int digit = n % 10;
                sumSQ += digit * digit;
                n /= 10;
            }
            if (set.count(sumSQ)) return false;
            set.emplace(sumSQ);
            n = sumSQ;
        }
        return true;
    }
};