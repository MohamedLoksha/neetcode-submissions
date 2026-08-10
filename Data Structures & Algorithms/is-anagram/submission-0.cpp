class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<char, int> ms, mt;
        for (const auto& c : s) ms[c]++;
        for (const auto& c : t) mt[c]++;
        if (ms == mt) return true;
        return false;
    }
};
