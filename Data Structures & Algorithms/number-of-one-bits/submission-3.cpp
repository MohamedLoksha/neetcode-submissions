class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result{};
        while (n) {
            result += n % 2;
            n = n >> 1;
        }
        return result;
    }
};
