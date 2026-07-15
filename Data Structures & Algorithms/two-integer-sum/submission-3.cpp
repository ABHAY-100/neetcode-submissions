class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;

        for (int i=0; i<nums.size(); i++) {
            if (!map.count(nums[i])) {
                map[nums[i]] = i;
            }

            int m = target-nums[i];
            if (map.count(m) && map[m] != i) {
                return {map[m], i};
            }
        }

        return {0, 0};
    }
};
