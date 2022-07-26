#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pivot, left = 0, right = nums.size() - 1;
        while (left <= right){
            pivot = (left + right) / 2;
            if (nums[pivot] == target){
                return pivot;
            }
            else if (nums[pivot] < target){
                left = pivot + 1;
            }
            else{
                right = pivot - 1;
            }
        }
        return left;
    }
};

int main(){
    vector<int> sorted_array = {1, 2, 9, 16, 55, 64, 73, 88, 92, 100};
    Solution solution;
    int result = solution.searchInsert(sorted_array, 174);
    cout << result << endl;
}