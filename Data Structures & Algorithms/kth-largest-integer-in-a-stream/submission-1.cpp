class KthLargest {
private:
    priority_queue<int, vector<int>, greater<>> pq;
    int target = 1;
public:
    KthLargest(int k, vector<int>& nums) {
        target = k;
        for (const auto& n : nums) {
            pq.emplace(n);
            if (pq.size() > target) pq.pop();
        }
    }

    int add(int val) {
        pq.emplace(val);
        if (pq.size() > target) pq.pop();
        return pq.top();
    }
};
