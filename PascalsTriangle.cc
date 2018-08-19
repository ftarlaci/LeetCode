// Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it.
class Solution {
public:
    vector<vector<int>> generate(int numRows) {vector<vector<int>> out(numRows);
        for (int i = 0; i < numRows; i++) {
            out[i].resize(i + 1);
            out[i][0] = out[i][i] = 1;
            for (int j = 1; j < i; j++){
                out[i][j] = out[i - 1][j - 1] + out[i - 1][j];
            }
        }   
        return out; 
    }
};