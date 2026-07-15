class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> store;

        for (auto s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            store[key].push_back(s);
        }

        for (auto item : store) {
            res.push_back(item.second);
        }

        return res;
    }
};
