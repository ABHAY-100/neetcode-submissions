class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> store;

        for (auto s : strs) {
            vector<int> count(26, 0);

            for (char c : s) {
                count[c - 'a']++;
            }

            string key = "";
            for (int i=0; i<26; i++) {
                key += to_string(count[i]) + "#";
            }

            store[key].push_back(s);
        }

        for (auto item : store) {
            res.push_back(item.second);
        }

        return res;
    }
};
