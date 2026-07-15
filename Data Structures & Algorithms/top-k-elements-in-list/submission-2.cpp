class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<vector<int>> inter(nums.size()+1);

        for (int num : nums) {
            m[num]++;
        }

        for (auto item : m) {
            inter[item.second].push_back(item.first);
        }

        vector<int> res;

        for (int i=inter.size()-1; i>=0; i--) {
            for (int j=0; j<inter[i].size(); j++) {
                if (res.size() == k) {
                    break;
                }
                res.push_back(inter[i][j]);
            }
        }

        return res;
    }
};
