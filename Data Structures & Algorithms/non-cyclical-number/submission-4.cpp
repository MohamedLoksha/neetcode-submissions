class Solution {
private:
    int sumSQ{};
    void calculating(int& n) {
        sumSQ = 0;
        while (n != 0) {
            int digit = n % 10;
            sumSQ += digit * digit;
            n /= 10;
        }
        n = sumSQ;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        calculating(n);
        while (n != 1){
            calculating(n);
            if (set.count(sumSQ)) {
                set.clear();
                return false;
            }
            set.emplace(sumSQ);
        }
        set.clear();
        return true;
    }
};