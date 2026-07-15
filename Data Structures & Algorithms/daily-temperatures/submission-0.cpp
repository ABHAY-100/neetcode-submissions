class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> s; // temp, index

        for (int i=0; i<temperatures.size(); i++) {
            int t = temperatures[i];

            while (!s.empty() && t > s.top().first) {
                res[s.top().second] = i - s.top().second;
                s.pop();
            }

            s.push({t, i});
        }

        return res;
    }
};
