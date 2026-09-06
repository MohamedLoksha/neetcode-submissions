class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_heap;
        for (const auto& stone : stones) max_heap.emplace(stone);
        // smashing the two heaviest
        while (max_heap.size() > 1) {
            int first = max_heap.top();
            max_heap.pop();
            int second = max_heap.top();
            max_heap.pop();
            int result = first - second;
            if (result != 0) max_heap.emplace(result);
        }
        return max_heap.empty() ? 0 : max_heap.top();
    }
};
