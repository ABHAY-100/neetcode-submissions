class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0;
        unordered_set<int> s(nums.begin(), nums.end());

        for (int num : s) {
            int curr = num;

            while (s.find(curr) != s.end()) {
                curr++;
            }

            result = max(result, curr-num);
        }

        return result;
    }
};
