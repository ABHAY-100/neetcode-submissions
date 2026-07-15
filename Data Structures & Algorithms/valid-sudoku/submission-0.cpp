class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0; i<board.size(); i++) {
            unordered_set<char> seen;

            for (int j=0; j<board[i].size(); j++) {
                if (board[i][j] == '.') {
                    continue;
                }

                if (seen.count(board[i][j])) {
                    return false;
                }
                seen.insert(board[i][j]);
            }
        }

        for (int i=0; i<board.size(); i++) {
            unordered_set<char> seen;

            for (int j=0; j<board[i].size(); j++) {
                if (board[j][i] == '.') {
                    continue;
                }

                if (seen.count(board[j][i])) {
                    return false;
                }
                seen.insert(board[j][i]);
            }
        }

        for (int k=0; k<9; k++) {
            unordered_set<char> seen;

            for (int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    int row = (k/3)*3 + i;
                    int col = (k%3)*3 + j;

                    if (board[row][col] == '.') {
                        continue;
                    }

                    if (seen.count(board[row][col])) {
                        return false;
                    }
                    seen.insert(board[row][col]);
                }
            }
        }

        return true;
    }
};
