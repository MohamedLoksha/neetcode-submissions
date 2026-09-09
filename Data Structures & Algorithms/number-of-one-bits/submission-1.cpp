class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result{};
        while (n) {
            if (n % 2 != 0) result++;
            n /= 2;
        }
        return result;
    }
};
