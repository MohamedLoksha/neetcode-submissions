class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;
        int first{}, last = nums.size()-1;
        int mid = first + (last - first) / 2;
        while (first <= last) {
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) first = mid+1;
            else last = mid-1;
            mid = first + (last - first) / 2;
        }
        return -1;
    }
};