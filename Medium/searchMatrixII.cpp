#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0){
            return false;
        }
        int n = matrix[0].size();
        int current_row = 0, current_col = n - 1;
        while (current_row < m && current_col >= 0){
            if (matrix[current_row][current_col] == target){
                return true;
            }
            else if (matrix[current_row][current_col] > target){
                current_col--;
            }
            else{
                current_row++;
            }
        }
        return false;
    }
};

int main(){
    vector<vector<int>> matrix = {
        {1,  4, 7, 11, 15},
        {2,  5, 8, 12, 19},
        {3,  6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };
    int target = 5;
    Solution s;
    bool result = s.searchMatrix(matrix, target);
    cout << result << endl;
    return 0;
}