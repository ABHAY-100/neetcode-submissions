class Solution {
public:
    int characterReplacement(string s, int k) {
        int res = 0;
        unordered_map<char, int> m;

        int l = 0;
        int mx = 0;

        for (int r=l; r<s.size(); r++) {
            m[s[r]]++;
            mx = max(mx, m[s[r]]);

            if ((r-l+1) - mx > k) {
                m[s[l]]--;
                l++;
            }

            res = max(res, (r-l+1));
        }

        return res;
    }
};
