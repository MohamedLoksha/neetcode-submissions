class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for (const auto& n : nums){
            m[n]++;
            if (m[n] > 1) return true;
        }
        return false;
    }
};