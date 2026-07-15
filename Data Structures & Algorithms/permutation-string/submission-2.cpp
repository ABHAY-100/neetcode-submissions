class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> map1;

        for (char ch : s1) {
            map1[ch]++;
        }

        int need = map1.size();

        for (int i=0; i<s2.size(); i++) {
            unordered_map<char, int> map2;
            int curr = 0;
            
            for (int j=i; j<s2.size(); j++) {
                map2[s2[j]]++;

                if (map1[s2[j]] < map2[s2[j]]) {
                    break;
                }

                if (map1[s2[j]] == map2[s2[j]]) {
                    curr++;
                }
            }

            if (curr == need) {
                return true;
            }
        }

        return false;
    }
};
