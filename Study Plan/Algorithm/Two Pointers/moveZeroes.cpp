#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> result;
        for (auto i = nums.begin(); i != nums.end(); i++){
            if (*i != 0){
                result.push_back(*i);
            }
        }
        for (auto i = nums.begin(); i != nums.end(); i++){
            if (*i == 0){
                result.push_back(*i);
            }
        }
        
        nums = result;
    }
};

int main(){
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution solution;
    solution.moveZeroes(nums);
    for (auto i = nums.begin(); i != nums.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
}