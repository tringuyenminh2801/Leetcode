#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0;
        for (int j = 1; j < nums.size(); j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main(){
    vector<int> nums = {3, 4, 3, 4, 3, 4};
    Solution solution;

    int k = solution.removeDuplicates(nums);
    for (auto i : nums){
        cout << i << endl;
    }
}