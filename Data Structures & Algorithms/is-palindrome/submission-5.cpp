class Solution {
public:
    bool isPalindrome(string s) {
        auto front = s.begin();
        auto rear = s.rbegin();
        while (front != s.end() && rear != s.rend()){
            if (isalnum(*front)){
            
                if (isalnum(*rear)) {
                    if (tolower(*front) != tolower(*rear)) return false;
                    ++front;
                    ++rear;
                }
            
                else ++rear;
            
            }

            else ++front;
        }
        return true;
    }
};
