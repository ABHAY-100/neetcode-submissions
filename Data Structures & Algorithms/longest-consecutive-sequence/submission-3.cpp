class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int best = 0;

        for (int num : s) {
            if (s.count(num-1) == 0) {
                int y = num+1;
                while (s.count(y)) {
                    y += 1;
                }
                best = max(best, y-num);
            }
        }
        
        return best;
    }
};
