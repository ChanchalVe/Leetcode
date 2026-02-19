class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // int col = matrix[0].size();

// swapping logic
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(i == j) continue;
                else{
                    swap(matrix[i][j] , matrix[j][i]);
                }
            }
        }

        // now u have to reverse the matrix. now the questions is how do i reverse the list in place, without changing the order

        
        for(int i = 0; i < n; i++){
            reverse(matrix[i].begin(), matrix[i].end());

        }

    
        
    }
};