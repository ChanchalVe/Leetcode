class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        bool FirstRowzero = false;
        bool FirstColzero = false;
// check if first col have any zero
        for(int i = 0; i < row; i++){
            if(matrix[i][0] == 0){
                FirstColzero = true;
            }

        }
// check if first row have any zero
         for(int i = 0; i < col; i++){
            if(matrix[0][i] == 0){
                FirstRowzero = true;
            }

        }

       // now check if other than 1st row, col have zeroes, if yes mark the respective 1st col and row 0;

       for(int i = 1; i < row; i++){
        for(int j = 1; j < col; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
       }

    //    now mark them zero acc to markers
    for(int i = 1; i < row; i++){
        for(int j = 1; j < col; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
                
            }
        }
       }

       if(FirstColzero == true){
        for(int i = 0; i < row; i++){
            matrix[i][0] = 0;
        }
       }

       if(FirstRowzero == true){
        for(int i = 0; i < col; i++){
            matrix[0][i] = 0;
        }
       }








        
    }
};