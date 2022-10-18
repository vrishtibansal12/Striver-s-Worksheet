class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        bool col = matrix[0][0] == 0;
        bool row = matrix[0][0] == 0;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] != 0) continue;
                
                matrix[0][j] = 0;
                matrix[i][0] = 0;
                if(j == 0) col = true;
                if(i == 0) row = true;
            }
        }
        
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++)
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                    matrix[i][j] = 0;
        }

        if(col) for(int i = 0; i < m; i++) matrix[i][0] = 0;
        if(row) for(int j = 0; j < n; j++) matrix[0][j] = 0;
    }
};