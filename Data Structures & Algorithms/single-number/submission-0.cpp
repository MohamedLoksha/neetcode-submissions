class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result{};
        for (const auto& num : nums) result ^= num;
        return result;
    }
};