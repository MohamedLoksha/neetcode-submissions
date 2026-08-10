class Solution {
public:
    bool isAnagram(const string& s, const string& t) {
        int sl = s.length();
        if (sl != t.length()) return false;

        vector<int> count(26, 0);
        for (int i = 0; i < sl; i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (const auto& val : count)
            if (val != 0) return false;
        
        return true;
    }
};