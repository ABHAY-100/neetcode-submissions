class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (string& c : tokens) {
            if (c == "+") {
                int n2 = s.top(); s.pop();
                int n1 = s.top(); s.pop();

                int ans = n1 + n2;
                s.push(ans);
            } else if (c == "-") {
                int n2 = s.top(); s.pop();
                int n1 = s.top(); s.pop();

                int ans = n1 - n2;
                s.push(ans);
            } else if (c == "*") {
                int n2 = s.top(); s.pop();
                int n1 = s.top(); s.pop();

                int ans = n1 * n2;
                s.push(ans);
            } else if (c == "/") {
                int n2 = s.top(); s.pop();
                int n1 = s.top(); s.pop();

                int ans = n1 / n2;
                s.push(ans);
            } else {
                s.push(stoi(c));
            }
        }

        return s.top();
    }
};
