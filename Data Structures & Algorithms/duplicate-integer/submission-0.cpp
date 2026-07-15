class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;

        for (int i : nums) {
            if (!s.count(i)) {
                s.insert(i);
            } else {
                return true;
            }
        }

        return false;
    }
};