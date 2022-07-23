#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sorted_array;
        for (auto i : nums){
            sorted_array.push_back(i * i);
        }
        sort(sorted_array.begin(), sorted_array.end());
        return sorted_array;
    }
};

int main(){
    vector<int> nums = {-4,-1,0,3,10};
    Solution solution;
    vector<int> result = solution.sortedSquares(nums);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
}