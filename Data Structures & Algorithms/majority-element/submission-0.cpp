class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;

        for (int num : nums) {
            m[num]++;
        }

        for (auto item : m) {
            if (item.second > floor(nums.size()/2)) {
                return item.first;
            }
        }
    }
};