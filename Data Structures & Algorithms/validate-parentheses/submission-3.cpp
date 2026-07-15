class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> map = {
            {'}', '{'},
            {')', '('},
            {']', '['},
        };

        stack<char> st;

        for (char ch : s) {
            if (ch == '{' | ch == '[' | ch == '(') {
                st.push(ch);
            }
            if (ch == '}' | ch == ']' | ch == ')') {
                if (!st.empty() && st.top() == map[ch]) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        return st.empty() ? true : false;
    }
};
