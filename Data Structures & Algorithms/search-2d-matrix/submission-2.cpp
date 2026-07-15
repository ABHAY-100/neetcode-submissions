class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = -1;

        for (int i=0; i<matrix.size(); i++) {
            if (matrix[i][0] <= target) {
                r++;
            }
        }

        if (r == -1) return false;

        for (int i=0; i<matrix[r].size(); i++) {
            if (matrix[r][i] == target) {
                return true;
            }
        }

        return false;
    }
};
