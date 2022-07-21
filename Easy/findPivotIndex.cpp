#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int left_sum = 0;
        for (std::vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
            sum += *it;
        }
        for (int current = 0; current < nums.size(); current++){
            if (left_sum == sum - left_sum - nums[current]){
                return current;
            }
            left_sum += nums[current];
        }
        return -1;
    }
};

int main(){
    vector<int> nums = {1, 6, 2, 4, 5, 12, 7};
    Solution solution;
    int result = solution.pivotIndex(nums);
    cout << result << endl;
}