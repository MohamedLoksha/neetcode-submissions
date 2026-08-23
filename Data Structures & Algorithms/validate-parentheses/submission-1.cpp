class Solution {
public:
    bool isValid(string& s) {
        if (s.empty()) return true;
        if (s[0] == ')' || s[0] == '}' || s[0] == ']')
            return false;
        stack<char> container;
        for (const auto& ch : s) {
            if (!container.empty()) {
                if ((ch == ')' && container.top() == '(') ||
                    (ch == '}' && container.top() == '{') ||
                    (ch == ']' && container.top() == '[')) {
                    container.pop();
                    continue;
                }
            }
            container.emplace(ch);
        }
        return container.empty();
    }
};