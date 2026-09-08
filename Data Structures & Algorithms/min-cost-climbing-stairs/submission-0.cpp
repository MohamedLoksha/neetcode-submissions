class Solution {
public:
    vector<int> cache;
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        cache.resize(n, -1);
        return min(dfs(n, 0, cost), dfs(n, 1, cost));
    }
    int dfs(int n, int i, vector<int>& cost) {
        if (i >= n) return 0;
        if (cache[i] != -1) return cache[i];
        return cache[i] = cost[i] + min(dfs(n, i + 1, cost), dfs(n, i + 2, cost));
    }
};
