class Solution {
public:
        bool isPalindrome(string s) {
        string str;
        for (const auto& ch : s) {
            if (isalnum(ch))
            str += tolower(ch);
        }

        const int length = str.length();
        if (length < 1) return true;
        for (int i = 0, j = length-1-i; i <= length / 2; i++, j--)
            if (str[i] != str[j]) return false;

        return true;
    }
};