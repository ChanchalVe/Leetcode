class Solution {
public:
    bool check(int i, int j, int c, vector<vector<char>>& board, string& word) {
        if(c == word.size()) return true;

        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size()) return false;

        if(board[i][j] != word[c]) return false;

        char temp = board[i][j];
        board[i][j] = '#'; // mark visited

        bool found = check(i+1, j, c+1, board, word) ||
                     check(i-1, j, c+1, board, word) ||
                     check(i, j+1, c+1, board, word) ||
                     check(i, j-1, c+1, board, word);

        board[i][j] = temp; // restore

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(board[i][j] == word[0]){
                    if(check(i, j, 0, board, word)) return true;
                }
            }
        }
        return false;
    }
};
