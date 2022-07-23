#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> result;
        int vector_length = nums.size();
        int step = convertToStep(vector_length, k);
        //Step 1: Store k element at the back of nums
        for (int i = vector_length - step; i < vector_length; i++){
            result.push_back(nums[i]);
        }
        //Step 2: Store len - k element at the front of nums
        for (int i = 0; i < vector_length - step; i++){
            result.push_back(nums[i]);
        }
        nums = result;
    }
    
    int convertToStep(int vector_length, int k){
        if (k > vector_length){
            return k % vector_length;
        }
        else if (k == vector_length || k == 0){
            return 0;
        }
        else{
            return k;
        }
    }
};

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int k = 3;
    Solution solution;
    solution.rotate(nums, k);
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}