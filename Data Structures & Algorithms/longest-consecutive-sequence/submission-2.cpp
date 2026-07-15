class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 0;
        unordered_set<int> s(nums.begin(), nums.end());

        for (int num : s) {
            int curr = num;
            int streak = 0;

            while (s.find(curr) != s.end()) {
                streak++;
                curr++;
            }

            result = max(result, streak);
        }

        return result;
    }
};
