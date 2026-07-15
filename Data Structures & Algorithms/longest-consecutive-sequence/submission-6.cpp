class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int result = 1;

        for (int i=1; i<nums.size(); i++) {
            int m = 1;
            while (i<nums.size() && (nums[i-1] + 1 == nums[i] || nums[i-1] == nums[i])) {
                if (nums[i-1] != nums[i]) m++; 
                i++;
            }
            result = max(result, m);
        }

        return result;
    }
};
