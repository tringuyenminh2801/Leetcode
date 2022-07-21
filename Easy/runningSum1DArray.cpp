#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        result.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++){
            result.push_back(result[i - 1] + nums[i]);
        }
        
        return result;
    }
};

int main(){
    vector<int> nums = {1, 6, 2, 4, 5, 12, 7};
    Solution solution;
    vector<int> result = solution.runningSum(nums);
    for (auto i : result){
        cout << i << endl;
    }
}