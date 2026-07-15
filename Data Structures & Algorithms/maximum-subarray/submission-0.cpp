class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN;

        for (int i=0; i<nums.size(); i++) {
            int mx = 0;

            for (int j=i; j<nums.size(); j++) {
                mx += nums[j];

                sum = max(sum, mx);
            }
        }

        return sum;
    }
};
