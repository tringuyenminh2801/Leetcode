#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        while (i < nums.size()){
            if (nums[i] == val){
                for (int j = i; j < nums.size() - 1; ++j){
                    nums[j] = nums[j + 1];
                }
                nums.pop_back();
            }
            else{
                i++;
            }
        }
        int result = nums.size();
        return result;
    }
};