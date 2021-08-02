// Space complexity = O(1) -> since we are only allocating memory for number of elements
// Time complexity = 0(m*n) -> since we are iterating through each element in the matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> output;
        int m = matrix.size();
        int n = matrix[0].size();
        if(m==0 || n==0) return output;
        int start_row = 0, end_row = m - 1, start_collumn = 0, end_collumn = n - 1;

        int count{0};

        while((start_row <= end_row && start_collumn <= end_collumn)){

            // print the start row
            for(int i{start_collumn}; i<=end_collumn; i++){
            output.push_back(matrix[start_row][i]);
                count++;
            }

            if(count == m*n) return output;
            start_row++;

            // print the end collumn
             for(int i{start_row}; i<=end_row; i++){
            output.push_back(matrix[i][end_collumn]);
                 count++;
            }

            if(count == m*n) return output;
            end_collumn--;

            // print the end row
            for (int i{end_collumn}; i>=start_collumn; i--){
                output.push_back(matrix[end_row][i]);
                count++;
            }

            if(count == m*n) return output;
            end_row--;


            // print start collumn
            for(int i{end_row}; i>=start_row; i--){
                output.push_back(matrix[i][start_collumn]);
                count++;
            }

            if(count == m*n) return output;
            start_collumn++;
        }
        return output;
    }
};
