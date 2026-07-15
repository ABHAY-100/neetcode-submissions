class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        
        int result = 0;

        for (int num : s) {
            if (!s.count(num-1)) {
                int count = 1;
                while (s.count(num+count)) {
                    count++;
                }
                result = max(result, count);
            }
        }

        return result;
    }
};
