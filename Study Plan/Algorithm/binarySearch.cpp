#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
  int search(vector<int>& nums, int target) {
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
        return -1;
  }
};

int main(){
    vector<int> nums = {12, 55, 174, 999, 1024};
    Solution solution;
    int result = solution.search(nums, 174);
    cout << result << endl;
}