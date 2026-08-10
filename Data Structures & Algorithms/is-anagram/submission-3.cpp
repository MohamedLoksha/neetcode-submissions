class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        int sl = s.length();
        if (sl != t.length()) return false;
        unordered_map<char, int> ms, mt;
        for (int i = 0; i < sl; i++){
            ms[s[i]]++;
            mt[t[i]]++;
        }
        if (ms == mt) return true;
        return false;
    }
};
