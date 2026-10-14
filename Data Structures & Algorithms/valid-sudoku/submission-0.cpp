class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board){
        bool valid = true;

        for (int i = 0; i < 9; i++){ // rows
            vector<int> freq(10, 0);

            for (int j = 0; j < 9; j++){
                if (board[i][j] == '.') continue;

                freq[board[i][j] - '0']++;
                
                if (freq[board[i][j] - '0'] > 1){
                    valid = false;
                }
            }
        }

        for (int i = 0; i < 9; i++){ // columns
            vector<int> freq(10, 0);

            for (int j = 0; j < 9; j++){
                if (board[j][i] == '.') continue;

                freq[board[j][i] - '0']++;
                
                if (freq[board[j][i] - '0'] > 1){
                    valid = false;
                }
            }
        }

        for (int b = 0; b < 9; b += 3){ // squares
            for (int a = 0; a < 9; a += 3){
                vector<int> freq(10, 0);
                
                for (int i = a; i < a + 3; i++){
                    for (int j = b; j < b + 3; j++){
                        if (board[i][j] == '.') continue;

                        freq[board[i][j] - '0']++;

                        if (freq[board[i][j] - '0'] > 1){
                            valid = false;
                        }
                    }
                }
            }
        }

        return valid ? true : false;
    }
};
