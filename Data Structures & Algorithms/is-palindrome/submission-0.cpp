class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for (const auto& ch : s) {
            if ( (ch >= '0' && ch <= '9') ||
                 (ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z') )
                str += tolower(ch);
        }
        
        const int length = str.length();
        for (int i = 0, j = length-1-i; i <= length / 2; i++, j--)
            if (str[i] != str[j]) return false;
        
        return true;
    }
};
