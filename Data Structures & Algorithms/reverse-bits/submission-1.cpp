class Solution {
public:
    uint32_t reverseBits(uint32_t n) { // 00000000100101
        if (!n) return n; // if (n == 0) return 0;
        int res{};
        for (int i = 31; i >= 0; i--) {
            if (n & 1)
                res += 1 << i;
            n >>= 1;
        }
        return res;
    }
};