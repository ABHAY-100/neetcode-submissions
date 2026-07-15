class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (int i=0; i<tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                s.push(stoi(tokens[i]));
            } else {
                int num2 = s.top();
                s.pop();
                int num1 = s.top();
                s.pop();

                int ans;

                if (tokens[i] == "+") {
                    ans = num1 + num2;
                }

                if (tokens[i] == "-") {
                    ans = num1 - num2;
                }

                if (tokens[i] == "*") {
                    ans = num1 * num2;
                }

                if (tokens[i] == "/") {
                    ans = num1 / num2;
                }

                s.push(ans);
            }
        }

        return s.top();
    }
};
