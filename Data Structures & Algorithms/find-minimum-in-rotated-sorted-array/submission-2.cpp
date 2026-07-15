class Solution {
public:
    int findMin(vector<int> &nums) {
        for (int i=0, j=1; j<nums.size(); j++, i++) {
            if (nums[i] > nums[j]) {
                return nums[j];
            }
        }

        return nums[0];
    }
};
